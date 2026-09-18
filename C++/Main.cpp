#include <bits/stdc++.h>
#include "Bioskop.cpp"
using namespace std;

int main(){

    ios::sync_with_stdio(0);

    vector<Bioskop> daftarbioskop;
    string pilihan;
    printf("<<<<<<<<<<<< Menu utak atik data bioskop >>>>>>>>>>>>>\n");
    printf("\n");
    printf("insert: Untuk tambah data baru\n");
    printf("show: Untuk menampilkan data yang ada\n");
    printf("Update: Untuk mengedit data yang ada\n");
    printf("Delete: Untuk menghapus data\n");
    printf("Search: untuk mencari data\n");
    printf("Exit: Untuk keluar dari program\n");
    printf("Help: untuk melihat perintah pada program ini\n");
    do{
        vector<Bioskop>:: iterator iter = daftarbioskop.begin();
        cout << "masukan perintah: ";
        cin >> pilihan;
        if(pilihan == "insert" || pilihan == "Insert"){
            int id = 0;
            cout << "Masukan id: ";
            cin >> id;
            while(iter != daftarbioskop.end()){
                
            }
        }
        else if(pilihan == "show" || pilihan == "Show"){

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