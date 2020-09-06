package me.ag.poket.shared.db

import com.squareup.sqldelight.Transacter
import com.squareup.sqldelight.db.SqlDriver
import me.ag.poket.shared.db.shared.newInstance
import me.ag.poket.shared.db.shared.schema
import meagpoketshareddb.PoketDatabaseQueries

interface PoketDatabase : Transacter {
  val poketDatabaseQueries: PoketDatabaseQueries

  companion object {
    val Schema: SqlDriver.Schema
      get() = PoketDatabase::class.schema

    operator fun invoke(driver: SqlDriver): PoketDatabase =
        PoketDatabase::class.newInstance(driver)}
}
