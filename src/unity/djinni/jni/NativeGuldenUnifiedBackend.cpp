// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NativeGuldenUnifiedBackend.hpp"  // my header
#include "Marshal.hpp"
#include "NativeAddressRecord.hpp"
#include "NativeBlockinfoRecord.hpp"
#include "NativeGuldenMonitorListener.hpp"
#include "NativeGuldenUnifiedFrontend.hpp"
#include "NativeMonitorRecord.hpp"
#include "NativeMutationRecord.hpp"
#include "NativePeerRecord.hpp"
#include "NativeQrcodeRecord.hpp"
#include "NativeTransactionRecord.hpp"
#include "NativeUriRecipient.hpp"
#include "NativeUriRecord.hpp"

namespace djinni_generated {

NativeGuldenUnifiedBackend::NativeGuldenUnifiedBackend() : ::djinni::JniInterface<::GuldenUnifiedBackend, NativeGuldenUnifiedBackend>("com/gulden/jniunifiedbackend/GuldenUnifiedBackend$CppProxy") {}

NativeGuldenUnifiedBackend::~NativeGuldenUnifiedBackend() = default;


CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::GuldenUnifiedBackend>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_InitUnityLib(JNIEnv* jniEnv, jobject /*this*/, jstring j_dataDir, jboolean j_testnet, jobject j_signals)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::InitUnityLib(::djinni::String::toCpp(jniEnv, j_dataDir),
                                                      ::djinni::Bool::toCpp(jniEnv, j_testnet),
                                                      ::djinni_generated::NativeGuldenUnifiedFrontend::toCpp(jniEnv, j_signals));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_InitWalletFromRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::InitWalletFromRecoveryPhrase(::djinni::String::toCpp(jniEnv, j_phrase));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_InitWalletLinkedFromURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_linkedUri)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::InitWalletLinkedFromURI(::djinni::String::toCpp(jniEnv, j_linkedUri));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_IsValidLinkURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::IsValidLinkURI(::djinni::String::toCpp(jniEnv, j_phrase));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_ReplaceWalletLinkedFromURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_linkedUri)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::ReplaceWalletLinkedFromURI(::djinni::String::toCpp(jniEnv, j_linkedUri));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_EraseWalletSeedsAndAccounts(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::EraseWalletSeedsAndAccounts();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_IsValidRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::IsValidRecoveryPhrase(::djinni::String::toCpp(jniEnv, j_phrase));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_GenerateRecoveryMnemonic(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::GenerateRecoveryMnemonic();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_TerminateUnityLib(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::TerminateUnityLib();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_QRImageFromString(JNIEnv* jniEnv, jobject /*this*/, jstring j_qrString, jint j_widthHint)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::QRImageFromString(::djinni::String::toCpp(jniEnv, j_qrString),
                                                           ::djinni::I32::toCpp(jniEnv, j_widthHint));
        return ::djinni::release(::djinni_generated::NativeQrcodeRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_GetReceiveAddress(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::GetReceiveAddress();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_GetRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::GetRecoveryPhrase();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_HaveUnconfirmedFunds(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::HaveUnconfirmedFunds();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_GetBalance(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::GetBalance();
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_DoRescan(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::DoRescan();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_IsValidRecipient(JNIEnv* jniEnv, jobject /*this*/, jobject j_request)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::IsValidRecipient(::djinni_generated::NativeUriRecord::toCpp(jniEnv, j_request));
        return ::djinni::release(::djinni_generated::NativeUriRecipient::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_performPaymentToRecipient(JNIEnv* jniEnv, jobject /*this*/, jobject j_request)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::performPaymentToRecipient(::djinni_generated::NativeUriRecipient::toCpp(jniEnv, j_request));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getTransactionHistory(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getTransactionHistory();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeTransactionRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getTransaction(JNIEnv* jniEnv, jobject /*this*/, jstring j_txHash)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getTransaction(::djinni::String::toCpp(jniEnv, j_txHash));
        return ::djinni::release(::djinni_generated::NativeTransactionRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getMutationHistory(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getMutationHistory();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeMutationRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getAddressBookRecords(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getAddressBookRecords();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeAddressRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_addAddressBookRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::addAddressBookRecord(::djinni_generated::NativeAddressRecord::toCpp(jniEnv, j_address));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_deleteAddressBookRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::deleteAddressBookRecord(::djinni_generated::NativeAddressRecord::toCpp(jniEnv, j_address));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_PersistAndPruneForSPV(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::PersistAndPruneForSPV();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_ResetUnifiedProgress(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::ResetUnifiedProgress();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getPeers(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getPeers();
        return ::djinni::release(::djinni::List<::djinni_generated::NativePeerRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getLastSPVBlockinfos(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getLastSPVBlockinfos();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeBlockinfoRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_getMonitoringStats(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GuldenUnifiedBackend::getMonitoringStats();
        return ::djinni::release(::djinni_generated::NativeMonitorRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_RegisterMonitorListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::RegisterMonitorListener(::djinni_generated::NativeGuldenMonitorListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_GuldenUnifiedBackend_00024CppProxy_UnregisterMonitorListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::GuldenUnifiedBackend::UnregisterMonitorListener(::djinni_generated::NativeGuldenMonitorListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated