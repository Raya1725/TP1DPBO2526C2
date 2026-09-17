import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class Main{
    public static void main(String[] args) {
        ArrayList<Bioskop> daftarBioskop = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        String pilihan;
        do{
            System.out.print("Masukan perintah (masukan help jika tidak tahu): ");
            pilihan = sc.nextLine();
            if("insert".equalsIgnoreCase(pilihan)){
                System.out.print("Masukan Id: ");
                int id = sc.nextInt();
                sc.nextLine();
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
                    int no = 1;
                    for(Bioskop B : daftarBioskop){
                        System.out.println("Bioskop: " + no);
                        System.out.println("Id: " + B.getid());
                        System.out.println("Nama: " + B.getnama());
                        System.out.println("Alamat: " + B.getalamat());
                        System.out.println("Jumlah_studio: " + B.getjumlah_studio());
                        System.out.println("Kota: " + B.getkota());
                        no++;
                    }
                }
            }
            else if("update".equalsIgnoreCase(pilihan)){
                System.out.print("Masukan id bioskop yang mau diubah : ");
                int ubah = sc.nextInt();
                sc.nextLine();
                boolean ketemu = false;
                Iterator<Bioskop> iter = daftarBioskop.iterator();
                while(ketemu == false && iter.hasNext()){
                    Bioskop B = iter.next();
                    if(B.getid() == ubah){
                        ketemu = true;
                        System.out.println(" " + B.getnama());
                        System.out.println("Apa yang mau diubah?");
                        System.out.println("1,Nama");
                        System.out.println("2,Alamat");
                        System.out.println("3,Jumlah Studio");
                        System.out.println("4,Kota");
                        System.out.println("5,Semua (kecuali id)");
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
                System.out.println("berbagai Macam fitur: ");
                System.out.println("insert: Untuk tambah data baru");
                System.out.println("Show: Untuk menampilkan data yang ada");
                System.out.println("Update: Untuk mengedit data yang ada");
                System.out.println("Delete: Untuk menghapus data");
                System.out.println("Search: untuk mencari data");
                System.out.println("Exit: Untuk keluar dari program");
                System.out.println("Penggunaan huruf besar dan kecil tidak berpengaruh");
            }
            else{
                System.out.println("Perintah tidak dikenali... (nyawit ni)");
            }
        }while(!"exit".equalsIgnoreCase(pilihan));
        sc.close();
    }
}
