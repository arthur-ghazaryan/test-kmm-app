package me.ag.poket.shared

import com.arkivanov.mvikotlin.core.store.Reducer
import com.arkivanov.mvikotlin.core.store.Store
import com.arkivanov.mvikotlin.core.store.StoreFactory
import com.arkivanov.mvikotlin.extensions.reaktive.ReaktiveExecutor
import com.badoo.reaktive.scheduler.mainScheduler
import com.badoo.reaktive.single.flatMap
import com.badoo.reaktive.single.map
import com.badoo.reaktive.single.observeOn
import com.badoo.reaktive.single.singleFromFunction
import me.ag.poket.shared.db.PoketRepository
import meagpoketshareddb.Link

class AddLinkStoreFactory(
    private val storeFactory: StoreFactory,
    private val poketRepository: PoketRepository
) {

    fun create(): AddLinkStore = object : AddLinkStore,
        Store<AddLinkStore.Intent, AddLinkStore.State, AddLinkStore.Label> by storeFactory.create(
            name = "AddLinkStore",
            initialState = AddLinkStore.State(AddLinkStore.AsyncState.Loading),
            executorFactory = ::ExecutorImpl,
            reducer = ReducerImpl
        ) {

    }

    private sealed class Result {
        object InProgress : Result()
        class LinkSavedInDb(val link: Link) : Result()
    }

    private object ReducerImpl : Reducer<AddLinkStore.State, Result> {
        override fun AddLinkStore.State.reduce(result: Result): AddLinkStore.State =
            when (result) {
                is Result.LinkSavedInDb -> copy(link = AddLinkStore.AsyncState.Success(result.link))
                is Result.InProgress -> copy(link = AddLinkStore.AsyncState.Loading)
            }
    }

    private inner class ExecutorImpl :
        ReaktiveExecutor<AddLinkStore.Intent, Nothing, AddLinkStore.State, Result, AddLinkStore.Label>() {

        override fun executeIntent(
            intent: AddLinkStore.Intent,
            getState: () -> AddLinkStore.State
        ) {
            when (intent) {
                is AddLinkStore.Intent.AddLink -> parseLinkAndSaveInDb(intent.url)
            }
        }

        private fun parseLinkAndSaveInDb(url: String) {
            //TODO
            singleFromFunction<Link> {
                Link(url, id = 1, displayName = url.hashCode().toString())
            }.flatMap { link ->
                poketRepository.insertLink(link).map { link }
            }.map { Result.LinkSavedInDb(it) }.observeOn(mainScheduler)
                .subscribeScoped(onSuccess = {
                    dispatch(it)
                    publish(AddLinkStore.Label.ShowToast("Successfully saved in database"))
                })
        }
    }
}