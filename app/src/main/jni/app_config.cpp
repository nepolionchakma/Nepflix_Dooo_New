#include <jni.h>
#include <string>


std::string SERVER_URL = "https://dooo.jumcoders.xyz/"; //Copy API SERVER URL From Admin Panal->API Setting And Paste Here
std::string API_KEY = "bVt0AC8LyorHwnXP"; //Copy API KEY From Admin Panal->API Setting And Paste Here
std::string ONESIGNAL_APP_ID = "b695f2e3-ab75-4ee0-ba40-2269f6f81c65"; //Copy ONESIGNAL APP ID From Onesignal And Paste Here
bool allowVPN = false; // If false App Will Not Open In VPN
bool FLAG_SECURE = false; //If True No Screenshort, No Screen Recording in Application
bool allowRoot = true; // If false App Will Not Open In Rooted Device
std::string YOUTUBE_API_KEY = "AIzaSyBXzav06fp67HigovuZ5YuP82-ZeZZGEAQ";
bool unity_ad_testMode = false;





extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getApiServerUrl(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(SERVER_URL.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getApiKey(
        JNIEnv* env,
jclass clazz) {
return env->NewStringUTF(API_KEY.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getOnesignalAppID(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(ONESIGNAL_APP_ID.c_str());
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_allowVPNStatus(JNIEnv *env, jclass clazz) {
    return allowVPN;
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_flagSecureStatus(JNIEnv *env, jclass clazz) {
    return FLAG_SECURE;
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_allowRootStatus(JNIEnv *env, jclass clazz) {
    return allowRoot;
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getYoutubeApiKey(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(YOUTUBE_API_KEY.c_str());
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_unityAdTestModeStatus(JNIEnv *env, jclass clazz) {
    return unity_ad_testMode;
}