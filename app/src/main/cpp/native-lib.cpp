#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_seth_a5e_1dnd_1gen_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
