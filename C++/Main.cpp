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
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Masukan hanya angka: ";
                cin >> id;
            }
            cin.ignore();
            while(iter != daftarbioskop.end()){
                Bioskop &B = *iter;
                if(B.getid() == id){
                    int id_ada = B.getid();
                    while(id_ada == id){
                        cout << "Id sudah ada, masukan yang lain: ";
                        cin >> id;
                        while(cin.fail()){
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Masukan hanya angka: ";
                            cin >> id;
                        }
                    }
                }
                else{
                    iter++;
                }
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
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Masukan hanya angka: ";
                cin >> jumlah_studio;
            }
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
            cout << "Masukan id bioskop yang mau diubah: ";
            int ubah = 0;
            cin >> ubah;
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Masukan hanya angka: ";
                cin >> ubah;
            }
            bool ketemu = false;
            iter = daftarbioskop.begin();
            while(ketemu == false && iter != daftarbioskop.end()){
                Bioskop &B = *iter;
                if(B.getid() == ubah){
                    ketemu = true;
                    cout << "apa yang mau diubah: " << endl;
                    cout << "1, Nama: " << endl;
                    cout << "2, Alamat: " << endl;
                    cout << "3, Jumlah Studio: " << endl;
                    cout << "4, Kota: " << endl;
                    cout << "5, semua (Kecuali id): " << endl;
                    cout << "Masukan Nomor: ";
                    int update_pilihan;
                    cin >> update_pilihan;
                    while(cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Masukan hanya angka: ";
                        cin >> update_pilihan;
                    }
                    if(update_pilihan == 1){
                        cout << "Masukan nama: ";
                        string nama;
                        cin >> nama;
                        B.setnama(nama);
                        cout << "Pergantian nama berhasil...." << endl;
                    }
                    else if(update_pilihan == 2){
                        cout << "Masukan alamat: ";
                        string alamat;
                        cin >> alamat;
                        B.setalamat(alamat);
                        cout << "Pergantian alamat berhasil...." << endl;
                    }
                    else if(update_pilihan == 3){
                        cout << "Masukan jumlah studio: ";
                        int jumlah;
                        cin >> jumlah;
                        while(cin.fail()){
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Masukan hanya angka: ";
                            cin >> jumlah;
                        }
                        B.setjumlah_studio(jumlah);
                        cout << "Pergantian jumlah studio berhasil...." << endl;
                    }
                    else if(update_pilihan == 4){
                        cout << "Masukan kota: ";
                        string kota;
                        cin >> kota;
                        B.setkota(kota);
                        cout << "Pergantian kota berhasil...." << endl;
                    }
                    else if(update_pilihan == 5){
                        cout << "Masukan nama: " ;
                        string semua;
                        cin >> semua;
                        B.setnama(semua);
                        cout << "Masukan alamat: ";
                        cin >> semua;
                        B.setalamat(semua);
                        int angka;
                        cout << "Masukan jumlah studio: ";
                        cin >> angka;
                        B.setjumlah_studio(angka);
                        cout << "Masukan jumlah kota: ";
                        cin >> semua;
                        B.setkota(semua);
                        cout << "Pergantian seluruh data berhasil...." << endl;
                    }
                }
                else{
                    iter++;
                }
            }
            if(ketemu == false){
                cout << "data tidak ditemukan....." << endl;
            }
        }
        else if(pilihan == "delete" || pilihan == "Delete"){
            cout << "Masukan id bioskop yang mau dihapus: ";
            int hapus = 0;
            cin >> hapus;
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Masukan hanya angka: ";
                cin >> hapus;
            }
            bool ketemu = false;
            iter = daftarbioskop.begin();
            while(ketemu == false && iter != daftarbioskop.end()){
                if(iter->getid() == hapus){
                    ketemu = true;
                    iter = daftarbioskop.erase(iter);
                    cout << "data berhasil dihapus...." << endl;
                }
                else{
                    iter++;
                }
            }
            if(ketemu == false){
                cout << "data tidak ditemukan..." << endl;
            }
        }
        else if(pilihan == "search" || pilihan == "Search"){
            cout << "Masukan id bioskop yang mau dicari: ";
            int cari = 0;
            cin >> cari;
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Masukan hanya angka: ";
                cin >> cari;
            }
            bool ketemu = false;
            iter = daftarbioskop.begin();
            while(ketemu == false && iter != daftarbioskop.end()){
                if(iter->getid() == cari){
                    ketemu = true;
                    cout << "Id: "<< iter->getid() << endl;
                    cout << "Nama: "<< iter->getnama() << endl;
                    cout << "Alamat: " << iter->getalamat() << endl;
                    cout << "jumlah studio: "<< iter->getjumlah_studio() << endl;
                    cout << "Kota: " << iter->getkota() << endl;
                }
                else{
                    iter++;
                }
            }
            if(ketemu == false){
                cout << "data tidak ditemukan..." << endl;
            }
        }
        else if(pilihan == "help" || pilihan == "Help"){
            cout << "<<<<<<<<<<<< Menu utak atik data bioskop >>>>>>>>>>>>>" << endl;
            cout << endl;
            cout << "insert: Untuk tambah data baru" << endl;
            cout << "show: Untuk menampilkan data yang ada << endl";
            cout << "Update: Untuk mengedit data yang ada" << endl;
            cout << "Delete: Untuk menghapus data" << endl;
            cout << "Search: untuk mencari data" << endl;
            cout << "Exit: Untuk keluar dari program" << endl;
            cout << "Help: untuk melihat perintah pada program ini" << endl;
        }
        else{
            if(pilihan != "exit" && pilihan != "Exit"){
                cout << "Perintah tidak dikenali... (nyawit ni)\n";
            }
        }
    }while(pilihan != "exit" && pilihan != "Exit");




    return 0;
}