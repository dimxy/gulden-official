// Copyright (c) 2018 The Gulden developers
// Authored by: Malcolm MacLeod (mmacleod@gmx.com), Willem de Jonge (willem@isnapp.nl)
// Distributed under the GULDEN software license, see the accompanying
// file COPYING

package com.gulden.unity_wallet.ui

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.gulden.jniunifiedbackend.AddressRecord
import com.gulden.unity_wallet.R
import com.gulden.unity_wallet.UnityCore
import kotlinx.android.synthetic.main.address_book_list_item.view.*

class AddressBookAdapter(private var dataSource: ArrayList<AddressRecord>, val onItemClick: (position: Int, address: AddressRecord) -> Unit) : RecyclerView.Adapter<AddressBookAdapter.MyViewHolder>() {

    fun updateDataSource(newDataSource: ArrayList<AddressRecord>) {
        dataSource = newDataSource
        notifyDataSetChanged()
    }

    class MyViewHolder(val view: View): RecyclerView.ViewHolder(view)

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MyViewHolder {
        val view = LayoutInflater.from(parent.context)
                .inflate(R.layout.address_book_list_item, parent, false)
        // set the view's size, margins, paddings and layout parameters
        return MyViewHolder(view)
    }

    override fun getItemCount(): Int {
        return dataSource.size
    }

    override fun onBindViewHolder(holder: MyViewHolder, position: Int) {
        val view = holder.itemView

        val addressRecord = dataSource[position]
        view.textViewLabel.text = addressRecord.name

        view.setOnClickListener {
            onItemClick(position, addressRecord)
        }
    }

    override fun getItemId(position: Int): Long {
        return position.toLong()
    }

    fun removeAt(position: Int) {
        UnityCore.instance.deleteAddressBookRecord(dataSource[position])
    }
}
