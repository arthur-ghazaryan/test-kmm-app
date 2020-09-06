package me.ag.poket.shared.db

internal class Database(databaseDriverFactory: DatabaseDriverFactory) {
    private val database = PoketDatabase(databaseDriverFactory.createDriver())
    val dbQuery = database.poketDatabaseQueries

}