package me.ag.poket.androidApp

import android.os.Bundle
import android.util.Log
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.arkivanov.mvikotlin.main.store.DefaultStoreFactory
import com.arkivanov.mvikotlin.rx.Observer
import me.ag.poket.shared.Greeting
import me.ag.poket.shared.db.PoketRepository
import me.ag.poket.shared.AddLinkStore
import me.ag.poket.shared.AddLinkStoreFactory

fun greet(): String {
    return Greeting().greeting()
}

class MainActivity : AppCompatActivity() {

    private var store: AddLinkStore? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val tv: TextView = findViewById(R.id.text_view)
        tv.text = greet()

        val poketRepository = PoketRepository()
        store = AddLinkStoreFactory(DefaultStoreFactory, poketRepository).create()
        store?.labels(object : Observer<AddLinkStore.Label> {
            override fun onComplete() {

            }

            override fun onNext(value: AddLinkStore.Label) {
                when (value) {
                    is AddLinkStore.Label.ShowToast -> {
                        Toast.makeText(this@MainActivity, value.text, Toast.LENGTH_SHORT).show()
                    }
                }
            }

        })

        store?.states(object : Observer<AddLinkStore.State> {

            override fun onComplete() {

            }

            override fun onNext(value: AddLinkStore.State) {
                Log.e("Tag", value.toString())
            }
        })
    }

    override fun onDestroy() {
        super.onDestroy()
        store?.dispose()
    }
}
