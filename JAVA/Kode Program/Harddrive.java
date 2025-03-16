public class Harddrive extends Komponen {
    private int kapasitas;
    private String tipe;

    public Harddrive(int kapasitas, String tipe, String merk, int harga) {
        super(merk, harga);
        this.kapasitas = kapasitas;
        this.tipe = tipe;
    }

    public void setKapasitas(int kapasitas) {
        this.kapasitas = kapasitas;
    }

    public int getKapasitas() {
        return this.kapasitas;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public String getTipe() {
        return this.tipe;
    }
}
