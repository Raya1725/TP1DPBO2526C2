import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class Main{
    public static void main(String[] args) {
        ArrayList<Bioskop> daftarBioskop = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        String pilihan;
        System.out.println("<<<<<<<<<<<< Menu utak atik data bioskop >>>>>>>>>>>>>");
        System.out.println(" ");
        System.out.println("insert: Untuk tambah data baru");
        System.out.println("Show: Untuk menampilkan data yang ada");
        System.out.println("Update: Untuk mengedit data yang ada");
        System.out.println("Delete: Untuk menghapus data");
        System.out.println("Search: untuk mencari data");
        System.out.println("Exit: Untuk keluar dari program");
        System.out.println("Help: untuk melihat perintah pada program ini");
        System.out.println("Penggunaan huruf besar dan kecil tidak berpengaruh");
        do{
            Iterator<Bioskop> iter = daftarBioskop.iterator();
            System.out.println(" ");
            System.out.print("Masukan perintah : ");
            pilihan = sc.nextLine();
            if("insert".equalsIgnoreCase(pilihan)){
                int id = 0;
                System.out.print("Masukan id: ");
                id = sc.nextInt();
                sc.nextLine();
                while(iter.hasNext()){
                    Bioskop B = iter.next();
                    if(B.getid() == id){
                        int id_ada = B.getid();
                        while(id_ada == id){
                            System.out.print("Id sudah ada, masukan yang lain: ");
                            id = sc.nextInt();
                            sc.nextLine();
                        }
                    }
                }
                System.out.print("Masukan Nama: ");
                String nama = sc.nextLine();
                System.out.print("Masukan Alamat: ");
                String alamat = sc.nextLine();
                System.out.print("Masukan Jumlah Studiot: ");
                int jumlah_studio = sc.nextInt(); 
                sc.nextLine();
                System.out.print("Masukan Kota: ");
                String kota = sc.nextLine();
                Bioskop B = new Bioskop(id, nama, alamat, jumlah_studio, kota);
                daftarBioskop.add(B);
                System.out.println("data berhasil dimasukan coyy uhuyyy geloo brutal");
            }
            else if("show".equalsIgnoreCase(pilihan)){
                if(daftarBioskop.isEmpty()){
                    System.out.println("Kosong loh yahhh");
                }
                else{
                    int spasi_nama = 0;
                    int spasi_alamat = 0;
                    int spasi_kota = 0;
                    int spasi_id = 0;
                    int spasi_jumlah = 0;
                    for(int i = 0; i < daftarBioskop.size(); i++){
                        Bioskop depan = daftarBioskop.get(i);
                        if(i + 1 < daftarBioskop.size()){
                            Bioskop Belakang = daftarBioskop.get(i + 1);
                            if(depan.getnama().length() > Belakang.getnama().length()){
                                if(spasi_nama < depan.getnama().length() + 2){
                                    spasi_nama = depan.getnama().length() + 2;
                                }
                            }
                            if(depan.getnama().length() < Belakang.getnama().length()){
                                if(spasi_nama < Belakang.getnama().length() + 2){
                                    spasi_nama = Belakang.getnama().length() + 2;
                                }
                            }
                            if(depan.getalamat().length() > Belakang.getalamat().length()){
                                if(spasi_alamat < depan.getalamat().length() + 2){
                                    spasi_alamat = depan.getalamat().length() + 2;
                                }
                            }
                            if(depan.getalamat().length() < Belakang.getalamat().length()){
                                if(spasi_alamat < Belakang.getalamat().length() + 2){
                                    spasi_alamat = Belakang.getalamat().length() + 2;
                                }
                            } 
                            if(depan.getkota().length() > Belakang.getkota().length()){
                                if(spasi_kota < depan.getkota().length() + 2){
                                    spasi_kota = depan.getkota().length() + 2;
                                }
                            }
                            if(depan.getkota().length() < Belakang.getkota().length()){
                                if(spasi_kota < Belakang.getkota().length() + 2){
                                    spasi_kota = Belakang.getkota().length() + 2;
                                }
                            } 
                            if(String.valueOf(depan.getid()).length() > String.valueOf(Belakang.getid()).length()){
                                if(spasi_id < String.valueOf(depan.getid()).length() + 2){
                                    spasi_id = String.valueOf(depan.getid()).length() + 2;
                                }
                            }
                            if(String.valueOf(depan.getid()).length() < String.valueOf(Belakang.getid()).length()){
                                if(spasi_id < String.valueOf(Belakang.getid()).length() + 2){
                                    spasi_id = String.valueOf(Belakang.getid()).length() + 2;
                                }
                            } 
                            if(String.valueOf(depan.getjumlah_studio()).length() > String.valueOf(Belakang.getjumlah_studio()).length()){
                                if(spasi_jumlah < String.valueOf(depan.getjumlah_studio()).length() + 2){
                                    spasi_jumlah = String.valueOf(depan.getjumlah_studio()).length() + 2;
                                }
                            }
                            if(String.valueOf(depan.getjumlah_studio()).length() < String.valueOf(Belakang.getjumlah_studio()).length()){
                                if(spasi_jumlah < String.valueOf(Belakang.getjumlah_studio()).length() + 2){
                                    spasi_jumlah = String.valueOf(Belakang.getjumlah_studio()).length() + 2;
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
                            if(spasi_jumlah < String.valueOf(depan.getjumlah_studio()).length() + 2){
                                spasi_jumlah = String.valueOf(depan.getjumlah_studio()).length() + 2;
                            }
                            if(spasi_id < String.valueOf(depan.getid()).length() + 2){
                                spasi_id = String.valueOf(depan.getid()).length() + 2;
                            }
                        }
                    }
                    System.out.println("Daftar Bioskop yang tersedia: ");
                    for(int i = 0; i < spasi_alamat + spasi_kota + spasi_nama + 53; i++){
                        System.out.print("_");
                    }
                    System.out.println();
                    for(Bioskop B : daftarBioskop){
                        System.out.print("|Id: " + B.getid());
                        for(int i = 0; i < spasi_id - String.valueOf(B.getid()).length(); i++){
                            System.out.print(" ");
                        }
                        System.out.print("|Nama: " + B.getnama());
                        for(int i = 0; i < spasi_nama - B.getnama().length(); i++){
                            System.out.print(" ");
                        }
                        System.out.print("|Alamat: " + B.getalamat());
                        for(int i = 0; i < spasi_alamat - B.getalamat().length(); i++){
                            System.out.print(" ");
                        }
                        System.out.print("|Jumlah_studio: " + B.getjumlah_studio());
                        for(int i = 0; i < spasi_id - String.valueOf(B.getjumlah_studio()).length(); i++){
                            System.out.print(" ");
                        }
                        System.out.print("|Kota: " + B.getkota());
                        for(int i = 0; i < spasi_kota - B.getkota().length(); i++){
                            System.out.print(" ");
                        }
                        System.out.print("|");
                        System.out.println();
                        for(int i = 0; i < spasi_alamat + spasi_kota + spasi_nama + 53; i++){
                        System.out.print("-");
                    }
                        System.out.println();
                    }
                }
            }
            else if("update".equalsIgnoreCase(pilihan)){
                System.out.print("Masukan id bioskop yang mau diubah: ");
                int ubah = sc.nextInt();
                sc.nextLine();
                boolean ketemu = false;
                while(ketemu == false && iter.hasNext()){
                    Bioskop B = iter.next();
                    if(B.getid() == ubah){
                        ketemu = true;
                        System.out.println("Apa yang mau diubah?");
                        System.out.println("1,Nama");
                        System.out.println("2,Alamat");
                        System.out.println("3,Jumlah Studio");
                        System.out.println("4,Kota");
                        System.out.println("5,Semua (kecuali id)");
                        System.out.print("Masukan nomor: ");
                        int update_yang_mana = sc.nextInt();
                        sc.nextLine();
                        if(update_yang_mana == 1){
                            System.out.print("Masukan nama: ");
                            B.setnama(sc.nextLine());
                            System.out.println("Pergantian nama berhasil...");
                        }
                        else if(update_yang_mana == 2){
                            System.out.print("Masukan alamat: ");
                            B.setalamat(sc.nextLine());
                            System.out.println("Pergantian alamat berhasil...");
                        }
                        else if(update_yang_mana == 3){
                            System.out.print("Masukan jumlah studio: ");
                            B.setjumlah_studio(sc.nextInt());
                            sc.nextLine();
                            System.out.println("Pergantian jumlah studio berhasil...");
                        }
                        else if(update_yang_mana == 4){
                            System.out.print("Masukan kota: ");
                            B.setkota(sc.nextLine());
                            System.out.println("Pergantian kota berhasil...");
                        }
                        else if(update_yang_mana == 5){
                            System.out.print("Masukan nama: ");
                            B.setnama(sc.nextLine());
                            System.out.print("Masukan alamat: ");
                            B.setalamat(sc.nextLine());
                            System.out.print("Masukan jumlah studio: ");
                            B.setjumlah_studio(sc.nextInt());
                            sc.nextLine();
                            System.out.print("Masukan kota: ");
                            B.setkota(sc.nextLine());
                            System.out.println("Pergantian seluruh data berhasil...");
                        }
                        else{
                            System.out.println("Nomor tidak valid");
                        }
                    }
                }
                if(ketemu == false){
                    System.out.println("Kode tidak ditemukan.....");
                }
            }
            else if("help".equalsIgnoreCase(pilihan)){
                System.out.println("<<<<<<<<<<<< Menu utak atik data bioskop >>>>>>>>>>>>>");
                System.out.println(" ");
                System.out.println("insert: Untuk tambah data baru");
                System.out.println("Show: Untuk menampilkan data yang ada");
                System.out.println("Update: Untuk mengedit data yang ada");
                System.out.println("Delete: Untuk menghapus data");
                System.out.println("Search: untuk mencari data");
                System.out.println("Exit: Untuk keluar dari program");
            }
            else if("delete".equalsIgnoreCase(pilihan)){
                System.out.print("Masukan id bioskop yang mau dihapus: ");
                int hapus = sc.nextInt();
                sc.nextLine();
                boolean ketemu = false;
                while(ketemu == false && iter.hasNext()){
                    Bioskop B = iter.next();
                    if(B.getid() == hapus){
                        iter.remove();
                        System.out.println("Data Berhasil terhapus.... noooooooo");
                        ketemu = true;
                    }
                }
                if(ketemu == false){
                    System.out.println("Data tidak ditemukan (jangan halu)......");
                }
            }
            else if("search".equalsIgnoreCase(pilihan)){
                System.out.print("Masukan id bioskop yang mau dicari: ");
                int cari = sc.nextInt();
                sc.nextLine();
                boolean ketemu = false;
                while(ketemu == false && iter.hasNext()){
                    Bioskop B = iter.next();
                    if(B.getid() == cari){
                        System.out.println("Id: " + B.getid());
                        System.out.println("Nama: " + B.getnama());
                        System.out.println("Alamat: " + B.getalamat());
                        System.out.println("Jumlah_studio: " + B.getjumlah_studio());
                        System.out.println("Kota: " + B.getkota());
                        ketemu = true;
                    }
                }
                if(ketemu == false){
                    System.out.println("Data tidak ditemukan (jangan halu)......");
                }
            }
            else{
                if(!"exit".equalsIgnoreCase(pilihan)){
                    System.out.println("Perintah tidak dikenali... (nyawit ni)");
                }
            }
        }while(!"exit".equalsIgnoreCase(pilihan));
        sc.close();
    }
}
