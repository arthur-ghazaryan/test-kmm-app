package meagpoketshareddb

import kotlin.Long
import kotlin.String

data class Link(
  val url: String,
  val id: Long,
  val displayName: String
) {
  override fun toString(): String = """
  |Link [
  |  url: $url
  |  id: $id
  |  displayName: $displayName
  |]
  """.trimMargin()
}
