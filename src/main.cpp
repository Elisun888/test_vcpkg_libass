// // #include <ass/ass.h>
#include <jni.h>
#include <string>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_example_libasstest_LibAssWrapper_testLibAss(
            JNIEnv *env,
            jobject obj) {
        // int version = ass_library_version();
        // if (version > 0) {
        //     return env->NewStringUTF("libass linked successfully");
        // } else {
        //     return env->NewStringUTF("libass link failed");
        // }
        env->NewStringUTF("Hello world");
    }
}

int main() {

}