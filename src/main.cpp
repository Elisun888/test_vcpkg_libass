// // #include <ass/ass.h>
#include <jni.h>
#include <string>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_example_libasstest_LibAssWrapper_testLibAss(
            JNIEnv *env,
            jobject obj) {
        env->NewStringUTF("Hello world");
    }
}

int main() {

}