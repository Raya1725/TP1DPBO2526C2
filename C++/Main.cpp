#include <bits/stdc++.h>
#include "Bioskop.cpp"
using namespace std;

int main(){

    ios::sync_with_stdio(0);

    vector<Bioskop> daftarbioskop;
    string pilihan;
    cout << "<<<<<<<<<<<< Menu utak atik data bioskop >>>>>>>>>>>>>" << endl;
    cout << endl;
    cout << "insert: Untuk tambah data baru" << endl;
    cout << "show: Untuk menampilkan data yang ada << endl";
    cout << "Update: Untuk mengedit data yang ada" << endl;
    cout << "Delete: Untuk menghapus data" << endl;
    cout << "Search: untuk mencari data" << endl;
    cout << "Exit: Untuk keluar dari program" << endl;
    cout << "Help: untuk melihat perintah pada program ini" << endl;
    do{
        vector<Bioskop>:: iterator iter = daftarbioskop.begin();
        cout << "masukan perintah: ";
        cin >> pilihan;
        if(pilihan == "insert" || pilihan == "Insert"){
            int id = 0;
            cout << "Masukan id: ";
            cin >> id;
            while(iter != daftarbioskop.end()){
                Bioskop B;
                if(B.getid() == id){
                    int id_ada = B.getid();
                    while(id_ada == id){
                        cout << "Id sudah ada, masukan yang lain: ";
                        cin >> id;
                    }
                }
                iter++;
            }
            cout << "Masukan Nama: ";
            string nama;
            cin >> nama;
            cout << "Masukan Alamat: ";
            string alamat;
            cin >> alamat;
            cout << "Masukan Jumlah Studio: ";
            int jumlah_studio;
            cin >> jumlah_studio;
            cout << "Masukan Kota: ";
            string kota;
            cin >> kota;
            Bioskop B = Bioskop(id, nama, alamat, jumlah_studio, kota);
            daftarbioskop.push_back(B);
            cout << "Data Berhasil Dimasukan, geloooo disini juga berhasill" << endl;
        }
        else if(pilihan == "show" || pilihan == "Show"){
            if(daftarbioskop.empty()){
                cout << "Kosong loh yahhh" << endl;
            }
            else{
                int spasi_nama = 0;
                int spasi_alamat = 0;
                int spasi_kota = 0;
                int spasi_id = 0;
                int spasi_jumlah = 0;
                for(int i =  0; i < daftarbioskop.size(); i++){
                    Bioskop depan = daftarbioskop[0];
                    if(i + 1 < daftarbioskop.size()){
                        Bioskop belakang = daftarbioskop[1];
                        if(to_string(depan.getid()).length() > to_string(belakang.getid()).length()){
                            if(spasi_id < to_string(depan.getid()).length() + 2){
                                spasi_id = to_string(depan.getid()).length() + 2;
                            }
                        }
                        if(to_string(depan.getid()).length() < to_string(belakang.getid()).length()){
                            if(spasi_id < to_string(belakang.getid()).length() + 2){
                                spasi_id = to_string(belakang.getid()).length() + 2;
                            }
                        }
                        if(to_string(depan.getjumlah_studio()).length() > to_string(belakang.getjumlah_studio()).length()){
                            if(spasi_jumlah < to_string(depan.getjumlah_studio()).length() + 2){
                                spasi_jumlah = to_string(depan.getjumlah_studio()).length() + 2;
                            }
                        }
                        if(to_string(depan.getjumlah_studio()).length() < to_string(belakang.getjumlah_studio()).length()){
                            if(spasi_jumlah < to_string(belakang.getjumlah_studio()).length() + 2){
                                spasi_jumlah = to_string(belakang.getjumlah_studio()).length() + 2;
                            }
                        }
                        if(depan.getnama().length() > belakang.getnama().length()){
                            if(spasi_nama < depan.getnama().length() + 2){
                                spasi_nama = depan.getnama().length() + 2;
                            }
                        }
                        if(depan.getnama().length() < belakang.getnama().length()){
                            if(spasi_nama < belakang.getnama().length() + 2){
                                spasi_nama = belakang.getnama().length() + 2;
                            }
                        }
                        if(depan.getalamat().length() > belakang.getalamat().length()){
                            if(spasi_alamat < depan.getalamat().length() + 2){
                                spasi_alamat = depan.getalamat().length() + 2;
                            }
                        }
                        if(depan.getalamat().length() < belakang.getalamat().length()){
                            if(spasi_alamat < belakang.getalamat().length() + 2){
                                spasi_alamat = belakang.getalamat().length() + 2;
                            }
                        }
                        if(depan.getkota().length() > belakang.getkota().length()){
                            if(spasi_kota < depan.getkota().length() + 2){
                                spasi_kota = depan.getkota().length() + 2;
                            }
                        }
                        if(depan.getkota().length() < belakang.getkota().length()){
                            if(spasi_kota < belakang.getkota().length() + 2){
                                spasi_kota = belakang.getkota().length() + 2;
                            }
                        }      
                    }
                    else{
                        if(spasi_nama < depan.getnama().length() + 2){
                            spasi_nama = depan.getnama().length() + 2;
                        }
                        if(spasi_alamat < depan.getalamat().length() + 2){
                            spasi_alamat = depan.getalamat().length() + 2;
                        }
                        if(spasi_kota < depan.getkota().length() + 2){
                            spasi_kota = depan.getkota().length() + 2;
                        }
                        if(spasi_jumlah < to_string(depan.getjumlah_studio()).length() + 2){
                            spasi_jumlah = to_string(depan.getjumlah_studio()).length() + 2;
                        }
                        if(spasi_id < to_string(depan.getid()).length() + 2){
                            spasi_id = to_string(depan.getid()).length() + 2;
                        }
                    }
                }
                cout << "Daftar Bioskop yang Tersedia: " << endl;
                for(int i = 0; i < spasi_alamat + spasi_kota + spasi_nama + 53; i++){
                    cout << "_";
                }
                cout << endl;
                for(Bioskop B : daftarbioskop){
                    cout << "|Id: " << B.getid();
                    for(int i = 0; i < spasi_id - to_string(B.getid()).length(); i++){
                        cout << " ";
                    }
                    cout << "|Nama: " << B.getnama();
                    for(int i = 0; i < spasi_nama - B.getnama().length(); i++){
                        cout << " ";
                    }
                    cout << "|Alamat: " << B.getalamat();
                    for(int i = 0; i < spasi_alamat - B.getalamat().length(); i++){
                        cout << " ";
                    }
                    cout << "|Jumlah_studio: " << B.getjumlah_studio();
                    for(int i = 0; i < spasi_jumlah - to_string(B.getjumlah_studio()).length(); i++){
                        cout << " ";
                    }
                    cout << "|Kota: " << B.getkota();
                    for(int i = 0; i < spasi_kota - B.getkota().length(); i++){
                        cout << " ";
                    }
                    cout << "|";
                    cout << endl;
                }
                for(int i = 0; i < spasi_alamat + spasi_kota + spasi_nama + 53; i++){
                    cout << "-";
                }
                cout << endl;
            }
        }
        else if(pilihan == "update" || pilihan == "Update"){

        }
        else if(pilihan == "delete" || pilihan == "Delete"){
            
        }
        else if(pilihan == "search" || pilihan == "Search"){

        }
        else{
            if(pilihan != "exit" && pilihan != "Exit"){
                cout << "Perintah tidak dikenali... (nyawit ni)\n";
            }
        }
    }while(pilihan != "exit" && pilihan != "Exit");




    return 0;
}