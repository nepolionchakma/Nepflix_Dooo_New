@echo off
"C:\\Users\\tangc\\AppData\\Local\\Android\\Sdk\\cmake\\3.22.1\\bin\\cmake.exe" ^
  "-HD:\\apps\\dooo\\Dooo\\app\\src\\main\\jni" ^
  "-DCMAKE_SYSTEM_NAME=Android" ^
  "-DCMAKE_EXPORT_COMPILE_COMMANDS=ON" ^
  "-DCMAKE_SYSTEM_VERSION=23" ^
  "-DANDROID_PLATFORM=android-23" ^
  "-DANDROID_ABI=x86" ^
  "-DCMAKE_ANDROID_ARCH_ABI=x86" ^
  "-DANDROID_NDK=C:\\Users\\tangc\\AppData\\Local\\Android\\Sdk\\ndk-bundle" ^
  "-DCMAKE_ANDROID_NDK=C:\\Users\\tangc\\AppData\\Local\\Android\\Sdk\\ndk-bundle" ^
  "-DCMAKE_TOOLCHAIN_FILE=C:\\Users\\tangc\\AppData\\Local\\Android\\Sdk\\ndk-bundle\\build\\cmake\\android.toolchain.cmake" ^
  "-DCMAKE_MAKE_PROGRAM=C:\\Users\\tangc\\AppData\\Local\\Android\\Sdk\\cmake\\3.22.1\\bin\\ninja.exe" ^
  "-DCMAKE_LIBRARY_OUTPUT_DIRECTORY=D:\\apps\\dooo\\Dooo\\app\\build\\intermediates\\cxx\\Debug\\394f6v1t\\obj\\x86" ^
  "-DCMAKE_RUNTIME_OUTPUT_DIRECTORY=D:\\apps\\dooo\\Dooo\\app\\build\\intermediates\\cxx\\Debug\\394f6v1t\\obj\\x86" ^
  "-DCMAKE_BUILD_TYPE=Debug" ^
  "-BD:\\apps\\dooo\\Dooo\\app\\.cxx\\Debug\\394f6v1t\\x86" ^
  -GNinja
