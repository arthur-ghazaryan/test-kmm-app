plugins {
    id("com.android.application")
    kotlin("android")
    id("kotlin-android-extensions")
}
group = "me.ag.poket"
version = "1.0-SNAPSHOT"

repositories {
    gradlePluginPortal()
    google()
    jcenter()
    mavenCentral()
}
dependencies {
    implementation(project(":shared"))
    implementation("com.google.android.material:material:1.2.0")
    implementation("androidx.appcompat:appcompat:1.2.0")
    implementation("androidx.constraintlayout:constraintlayout:1.1.3")
    implementation("org.koin:koin-android:3.0.1-alpha-2")
    implementation("org.koin:koin-android:3.0.1-alpha-2")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.3.7-1.4-M3")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.2.0")
    implementation("com.badoo.reaktive:reaktive:1.1.17")
    implementation("com.arkivanov.mvikotlin:rx:2.0.0-rc3")
}
android {
    compileSdkVersion(29)
    defaultConfig {
        applicationId = "me.ag.poket.androidApp"
        minSdkVersion(24)
        targetSdkVersion(29)
        versionCode = 1
        versionName = "1.0"
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}