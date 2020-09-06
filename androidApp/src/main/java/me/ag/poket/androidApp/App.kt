package me.ag.poket.androidApp

import android.app.Application
import me.ag.poket.shared.db.DatabaseDriverFactory
import me.ag.poket.shared.di.SharedComponent

class App : Application() {
    override fun onCreate() {
        super.onCreate()
        SharedComponent.initDependencies(DatabaseDriverFactory(this))
    }
}