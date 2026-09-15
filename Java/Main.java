import java.util.Scanner;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args) {
        ArrayList<Bioskop> daftarBioskop = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        String pilihan;
        do{
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
                int ubah = sc.nextInt();
                sc.nextLine();
                boolean ketemu = false;
                for(Bioskop B : daftarBioskop){

                }


            }
        }while(!"exit".equalsIgnoreCase(pilihan));
        sc.close();
    }
}
