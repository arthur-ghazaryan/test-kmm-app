package me.ag.poket.shared

import com.arkivanov.mvikotlin.core.store.Store
import meagpoketshareddb.Link

interface AddLinkStore : Store<AddLinkStore.Intent, AddLinkStore.State, AddLinkStore.Label> {

    sealed class Intent {
        class AddLink(val url: String) : Intent()
    }

    sealed class AsyncState<out T> {
        object Loading: AsyncState<Nothing>()
        data class Success<T>(val value: T) : AsyncState<T>()
    }

    data class State(val link: AsyncState<Link>)

    sealed class Label {
        class ShowToast(val text: String) : Label()
    }

}