// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

package com.gulden.jniunifiedbackend;

import java.util.concurrent.atomic.AtomicBoolean;

/**
 * Controller to perform functions at a wallet level (e.g. get balance of the entire wallet)
 * For per account functionality see accounts_controller
 */
public abstract class IWalletController {
    /** Set listener to be notified of wallet events */
    public static void setListener(IWalletListener networklistener)
    {
        CppProxy.setListener(networklistener);
    }

    /** Check if the wallet has any transactions that are still pending confirmation, to be used to determine if e.g. it is safe to perform a link or whether we should wait. */
    public static boolean HaveUnconfirmedFunds()
    {
        return CppProxy.HaveUnconfirmedFunds();
    }

    /** Check current wallet balance, as a single simple number that includes confirmed/unconfirmed/immature funds */
    public static long GetBalanceSimple()
    {
        return CppProxy.GetBalanceSimple();
    }

    /** Check current wallet balance */
    public static BalanceRecord GetBalance()
    {
        return CppProxy.GetBalance();
    }

    /** Abandon a transaction */
    public static boolean AbandonTransaction(String txHash)
    {
        return CppProxy.AbandonTransaction(txHash);
    }

    /** Get a unique UUID that identifies this wallet */
    public static String GetUUID()
    {
        return CppProxy.GetUUID();
    }

    private static final class CppProxy extends IWalletController
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        public static native void setListener(IWalletListener networklistener);

        public static native boolean HaveUnconfirmedFunds();

        public static native long GetBalanceSimple();

        public static native BalanceRecord GetBalance();

        public static native boolean AbandonTransaction(String txHash);

        public static native String GetUUID();
    }
}
