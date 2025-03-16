public class Ram extends Komponen {
    private int kapasitas;
    private int kecepatan;
    private String tipe;

    public Ram(int kapasitas, int kecepatan, String tipe, String merk, int harga) {
        super(merk, harga);
        this.kapasitas = kapasitas;
        this.kecepatan = kecepatan;
        this.tipe = tipe;
    }

    public void setKapasitas(int kapasitas) {
        this.kapasitas = kapasitas;
    }

    public int getKapasitas() {
        return this.kapasitas;
    }

    public void setKecepatan(int kecepatan) {
        this.kecepatan = kecepatan;
    }

    public int getKecepatan() {
        return this.kecepatan;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public String getTipe() {
        return this.tipe;
    }
}
