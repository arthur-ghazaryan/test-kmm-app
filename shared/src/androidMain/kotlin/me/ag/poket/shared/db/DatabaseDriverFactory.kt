package me.ag.poket.shared.db

import android.content.Context
import com.squareup.sqldelight.android.AndroidSqliteDriver
import com.squareup.sqldelight.db.SqlDriver

actual class DatabaseDriverFactory(private val context : Context) {
    actual fun createDriver(): SqlDriver {
        return AndroidSqliteDriver(PoketDatabase.Schema, context, "test.db")
    }
}