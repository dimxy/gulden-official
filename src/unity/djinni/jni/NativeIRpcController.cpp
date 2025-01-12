// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NativeIRpcController.hpp"  // my header
#include "Marshal.hpp"
#include "NativeIRpcListener.hpp"

namespace djinni_generated {

NativeIRpcController::NativeIRpcController() : ::djinni::JniInterface<::IRpcController, NativeIRpcController>("com/gulden/jniunifiedbackend/IRpcController$CppProxy") {}

NativeIRpcController::~NativeIRpcController() = default;


CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_IRpcController_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::IRpcController>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_IRpcController_00024CppProxy_execute(JNIEnv* jniEnv, jobject /*this*/, jstring j_rpcCommandLine, jobject j_resultListener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::IRpcController::execute(::djinni::String::toCpp(jniEnv, j_rpcCommandLine),
                                  ::djinni_generated::NativeIRpcListener::toCpp(jniEnv, j_resultListener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_IRpcController_00024CppProxy_getAutocompleteList(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::IRpcController::getAutocompleteList();
        return ::djinni::release(::djinni::List<::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
