package meagpoketshareddb

import com.squareup.sqldelight.Query
import com.squareup.sqldelight.Transacter
import kotlin.Any
import kotlin.Long
import kotlin.String

interface PoketDatabaseQueries : Transacter {
  fun <T : Any> selectLinkById(id: Long, mapper: (
    url: String,
    id: Long,
    displayName: String
  ) -> T): Query<T>

  fun selectLinkById(id: Long): Query<Link>

  fun <T : Any> selectAllLinks(mapper: (
    url: String,
    id: Long,
    displayName: String
  ) -> T): Query<T>

  fun selectAllLinks(): Query<Link>

  fun insertLink(url: String, displayName: String)

  fun removeAllLinks()
}
