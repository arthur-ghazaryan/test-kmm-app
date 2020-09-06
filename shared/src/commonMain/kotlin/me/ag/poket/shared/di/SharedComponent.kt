package me.ag.poket.shared.di

import me.ag.poket.shared.db.Database
import me.ag.poket.shared.db.DatabaseDriverFactory
import org.koin.core.context.startKoin
import org.koin.dsl.KoinAppDeclaration
import org.koin.dsl.module

object SharedComponent {

    private fun commonModule(databaseDriverFactory: DatabaseDriverFactory) = module {
        single { Database(databaseDriverFactory).dbQuery }
    }

    fun initDependencies(
        databaseDriverFactory: DatabaseDriverFactory,
        appDeclaration: KoinAppDeclaration = {}
    ) = startKoin {
        appDeclaration()
        modules(commonModule(databaseDriverFactory))
    }

    fun initDependencies(
        databaseDriverFactory: DatabaseDriverFactory,
    ) = startKoin {
        modules(commonModule(databaseDriverFactory))
    }

}