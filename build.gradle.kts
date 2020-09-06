buildscript {
    repositories {
        gradlePluginPortal()
        jcenter()
        google()
        mavenCentral()
    }
    dependencies {
        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:1.4.0")
        classpath("com.android.tools.build:gradle:4.0.1")
        classpath("com.squareup.sqldelight:gradle-plugin:1.4.3")
    }
}
group = "me.ag.poket"
version = "1.0-SNAPSHOT"

allprojects {
    repositories {
        google()
        mavenCentral()
        jcenter()
        maven(url = "https://dl.bintray.com/touchlabpublic/kotlin")
        maven(url = "https://dl.bintray.com/badoo/maven")
        maven(url = "https://dl.bintray.com/arkivanov/maven")
//        maven("https://dl.bintray.com/ekito/koin")
    }
}
