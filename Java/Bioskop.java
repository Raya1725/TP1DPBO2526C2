public class Bioskop {
    private String nama;
    private String alamat;
    private int jumlah_studio;
    private String kota;
    
    Bioskop(){

    }
    Bioskop(String nama, String alamat, int jumlah_studio, String kota){
        this.nama = nama;
        this.alamat = alamat;
        this.jumlah_studio = jumlah_studio;
        this.kota = kota;
    }

    void setnama(String nama){
        this.nama = nama;
    }
    String getnama(){
        return this.nama;
    }
    void setalamat(String alamat){
        this.alamat = alamat;
    }
    String getalamat(){
        return this.alamat;
    }
    void setjumlah_studio(int jumlah_studio){
        this.jumlah_studio = jumlah_studio;
    }
    int getjumlah_studio(){
        return this.jumlah_studio;
    }
    void setkota(String kota){
        this.kota = kota;
    }
    String getkota(){
        return this.kota;
    }

}
