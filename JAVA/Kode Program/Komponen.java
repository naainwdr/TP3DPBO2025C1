public class Komponen {
    private String merk;
    private int harga;

    public Komponen(String merk, int harga) {
        this.merk = merk;
        this.harga = harga;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setHarga(int harga) {
        this.harga = harga;
    }

    public String getMerk() {
        return this.merk;
    }

    public int getHarga() {
        return this.harga;
    }
}
