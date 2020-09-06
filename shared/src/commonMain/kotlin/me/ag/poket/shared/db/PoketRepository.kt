package me.ag.poket.shared.db

import com.badoo.reaktive.scheduler.ioScheduler
import com.badoo.reaktive.scheduler.mainScheduler
import com.badoo.reaktive.single.*
import meagpoketshareddb.Link
import meagpoketshareddb.PoketDatabaseQueries
import org.koin.core.KoinComponent
import org.koin.core.inject

class PoketRepository : KoinComponent {
    private val queries by inject<PoketDatabaseQueries>()

    fun insertLink(link: Link) = singleFromFunction {
        queries.insertLink(link.url, link.displayName)
    }

    fun getLinkById(id: Long): SingleWrapper<Link> = singleFromFunction {
        queries.selectLinkById(id).executeAsOne()
    }.wrap()

    fun getAllLinks(): SingleWrapper<List<Link>> = singleFromFunction {
        queries.selectAllLinks().executeAsList()
    }.subscribeOn(ioScheduler).observeOn(mainScheduler).wrap()

}