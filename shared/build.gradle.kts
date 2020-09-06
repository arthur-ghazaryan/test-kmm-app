import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("kotlin-android-extensions")
    id("com.squareup.sqldelight")
}
group = "me.ag.poket"
version = "1.0-SNAPSHOT"

repositories {
    gradlePluginPortal()
    google()
    jcenter()
    mavenCentral()
}

sqldelight {
    database("PoketDatabase") {
        packageName = "me.ag.poket.shared.db"
    }
}

val iosExportSuffix = getIosTargetName().toLowerCase()

kotlin {
    android()
    ios {
        binaries {
            framework {
                baseName = "shared"
                export("com.arkivanov.mvikotlin:mvikotlin-$iosExportSuffix:2.0.0-rc3")
                export("com.arkivanov.mvikotlin:mvikotlin-main-$iosExportSuffix:2.0.0-rc3")
                export("com.arkivanov.mvikotlin:rx-$iosExportSuffix:2.0.0-rc3")
            }
        }
    }

    val coroutinesVersion = "1.3.9-native-mt"

    sourceSets {
        val commonMain by getting {
            dependencies {
                api("com.arkivanov.mvikotlin:mvikotlin:2.0.0-rc3")
                api("com.arkivanov.mvikotlin:mvikotlin-main:2.0.0-rc3")
                api("com.arkivanov.mvikotlin:rx:2.0.0-rc3")
                implementation("com.arkivanov.mvikotlin:mvikotlin-extensions-reaktive:2.0.0-rc3")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion")
                implementation("org.koin:koin-core:3.0.1-alpha-2")
                implementation("com.squareup.sqldelight:runtime:1.4.3")
                implementation("com.squareup.sqldelight:coroutines-extensions:1.4.3")
                implementation("com.badoo.reaktive:reaktive:1.1.17")
                implementation("com.badoo.reaktive:coroutines-interop:1.1.17")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("com.google.android.material:material:1.2.0")
                implementation("com.squareup.sqldelight:android-driver:1.4.3")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.12")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("com.squareup.sqldelight:native-driver:1.4.3")
                implementation("org.koin:koin-core:3.0.1-alpha-2")
            }
        }
        val iosTest by getting
    }
}
android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
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

fun getIosTargetName(): String {
    val sdkName = System.getenv("SDK_NAME") ?: "iphonesimulator"
    return "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
}

val packForXcode by tasks.creating(Sync::class) {
    group = "build"
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val targetName = getIosTargetName()
    val framework = kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
    inputs.property("mode", mode)
    dependsOn(framework.linkTask)
    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)
}
tasks.getByName("build").dependsOn(packForXcode)
