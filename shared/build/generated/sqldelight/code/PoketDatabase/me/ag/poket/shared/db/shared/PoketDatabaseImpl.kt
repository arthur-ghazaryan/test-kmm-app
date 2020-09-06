package me.ag.poket.shared.db.shared

import com.squareup.sqldelight.Query
import com.squareup.sqldelight.TransacterImpl
import com.squareup.sqldelight.db.SqlCursor
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.internal.copyOnWriteList
import kotlin.Any
import kotlin.Int
import kotlin.Long
import kotlin.String
import kotlin.collections.MutableList
import kotlin.jvm.JvmField
import kotlin.reflect.KClass
import me.ag.poket.shared.db.PoketDatabase
import meagpoketshareddb.Link
import meagpoketshareddb.PoketDatabaseQueries

internal val KClass<PoketDatabase>.schema: SqlDriver.Schema
  get() = PoketDatabaseImpl.Schema

internal fun KClass<PoketDatabase>.newInstance(driver: SqlDriver): PoketDatabase =
    PoketDatabaseImpl(driver)

private class PoketDatabaseImpl(
  driver: SqlDriver
) : TransacterImpl(driver), PoketDatabase {
  override val poketDatabaseQueries: PoketDatabaseQueriesImpl = PoketDatabaseQueriesImpl(this,
      driver)

  object Schema : SqlDriver.Schema {
    override val version: Int
      get() = 1

    override fun create(driver: SqlDriver) {
      driver.execute(null, """
          |CREATE TABLE Link (
          |  url TEXT NOT NULL,
          |  id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
          |  displayName TEXT NOT NULL
          |)
          """.trimMargin(), 0)
    }

    override fun migrate(
      driver: SqlDriver,
      oldVersion: Int,
      newVersion: Int
    ) {
    }
  }
}

private class PoketDatabaseQueriesImpl(
  private val database: PoketDatabaseImpl,
  private val driver: SqlDriver
) : TransacterImpl(driver), PoketDatabaseQueries {
  internal val selectLinkById: MutableList<Query<*>> = copyOnWriteList()

  internal val selectAllLinks: MutableList<Query<*>> = copyOnWriteList()

  override fun <T : Any> selectLinkById(id: Long, mapper: (
    url: String,
    id: Long,
    displayName: String
  ) -> T): Query<T> = SelectLinkByIdQuery(id) { cursor ->
    mapper(
      cursor.getString(0)!!,
      cursor.getLong(1)!!,
      cursor.getString(2)!!
    )
  }

  override fun selectLinkById(id: Long): Query<Link> = selectLinkById(id) { url, id, displayName ->
    meagpoketshareddb.Link(
      url,
      id,
      displayName
    )
  }

  override fun <T : Any> selectAllLinks(mapper: (
    url: String,
    id: Long,
    displayName: String
  ) -> T): Query<T> = Query(1163211006, selectAllLinks, driver, "PoketDatabase.sq",
      "selectAllLinks", "SELECT * FROM Link") { cursor ->
    mapper(
      cursor.getString(0)!!,
      cursor.getLong(1)!!,
      cursor.getString(2)!!
    )
  }

  override fun selectAllLinks(): Query<Link> = selectAllLinks { url, id, displayName ->
    meagpoketshareddb.Link(
      url,
      id,
      displayName
    )
  }

  override fun insertLink(url: String, displayName: String) {
    driver.execute(54962333, """
    |INSERT INTO Link(url, displayName)
    |VALUES(?, ?)
    """.trimMargin(), 2) {
      bindString(1, url)
      bindString(2, displayName)
    }
    notifyQueries(54962333, {database.poketDatabaseQueries.selectLinkById +
        database.poketDatabaseQueries.selectAllLinks})
  }

  override fun removeAllLinks() {
    driver.execute(-1383535482, """DELETE FROM Link""", 0)
    notifyQueries(-1383535482, {database.poketDatabaseQueries.selectLinkById +
        database.poketDatabaseQueries.selectAllLinks})
  }

  private inner class SelectLinkByIdQuery<out T : Any>(
    @JvmField
    val id: Long,
    mapper: (SqlCursor) -> T
  ) : Query<T>(selectLinkById, mapper) {
    override fun execute(): SqlCursor = driver.executeQuery(576479570, """
    |SELECT * FROM Link
    |WHERE id = ?
    """.trimMargin(), 1) {
      bindLong(1, id)
    }

    override fun toString(): String = "PoketDatabase.sq:selectLinkById"
  }
}
