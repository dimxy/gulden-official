// Copyright (c) 2018 The Gulden developers
// Authored by: Willem de Jonge (willem@isnapp.nl)
// Distributed under the GULDEN software license, see the accompanying
// file COPYING

package com.gulden.unity_wallet.ui.monitor

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProviders
import androidx.recyclerview.widget.DividerItemDecoration
import androidx.recyclerview.widget.LinearLayoutManager
import com.gulden.jniunifiedbackend.ILibraryController
import com.gulden.jniunifiedbackend.IP2pNetworkController
import com.gulden.unity_wallet.R
import com.gulden.unity_wallet.UnityCore
import com.gulden.unity_wallet.util.AppBaseFragment
import kotlinx.android.synthetic.main.peer_list_fragment.*
import kotlinx.android.synthetic.main.peer_list_fragment.view.*
import kotlinx.coroutines.*
import kotlin.coroutines.CoroutineContext

class PeerListFragment : AppBaseFragment(), CoroutineScope {
    override val coroutineContext: CoroutineContext = Dispatchers.Main + SupervisorJob()

    var peerUpdateJob: Job? = null

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?,
                              savedInstanceState: Bundle?): View? {

        val adapter = PeerListAdapter()
        adapter.setHasStableIds(true)

        val viewModel = ViewModelProviders.of(this).get(PeerListViewModel::class.java)

        // observe peer changes
        viewModel.getPeers().observe(this, Observer { peers ->
            if (peers.isEmpty()) {
                peer_list_group.displayedChild = 1
            } else {
                peer_list_group.displayedChild = 2
                adapter.submitList(peers)
            }
        })

        // periodically update peers
        peerUpdateJob = launch(Dispatchers.Main) {
            try {
                UnityCore.instance.walletReady.await()
                while (isActive) {
                    val peers = withContext(Dispatchers.IO) {
                        IP2pNetworkController.getPeerInfo()
                    }
                    viewModel.setPeers(peers)
                    delay(3000)
                }
            }
            catch (e: Throwable) {
                // silently ignore walletReady failure (deferred was cancelled or completed with exception)
            }
        }

        val view = inflater.inflate(R.layout.peer_list_fragment, container, false)

        view.peer_list.let { recycler ->
            recycler.layoutManager = LinearLayoutManager(context)
            recycler.adapter = adapter
            recycler.addItemDecoration(DividerItemDecoration(context, DividerItemDecoration.VERTICAL))

            // Turn off item animation as it causes annoying flicker every time we do an update (every 3000ms)
            recycler.itemAnimator = null
            // Turn off scroll bar fading as otherwise the scroll bar annoyingly keeps appearing and re-appearing when we do an update (every 3000ms)
            recycler.isScrollbarFadingEnabled = false
        }

        return view
    }

    override fun onDestroy() {
        super.onDestroy()
        peerUpdateJob?.cancel()
    }

}
