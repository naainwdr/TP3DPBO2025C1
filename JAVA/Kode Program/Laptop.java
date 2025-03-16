import java.util.List;

public class Laptop extends Komputer {
    private int kapasitasBaterai;
    private double berat;
    private int jumlahBaterai;

    public Laptop(String pemilik, Cpu cpu, Gpu gpu, List<Ram> ramList, List<Harddrive> harddriveList,
                  String os, String jenis, int kapasitasBaterai, double berat, int jumlahBaterai) {
        super(pemilik, cpu, gpu, ramList, harddriveList);
        this.setOs(os);
        this.setJenis(jenis);
        this.kapasitasBaterai = kapasitasBaterai;
        this.berat = berat;
        this.jumlahBaterai = jumlahBaterai;
    }

    public void setKapasitasBaterai(int kapasitasBaterai) {
        this.kapasitasBaterai = kapasitasBaterai;
    }

    public int getKapasitasBaterai() {
        return this.kapasitasBaterai;
    }

    public void setBerat(double berat) {
        this.berat = berat;
    }

    public double getBerat() {
        return this.berat;
    }

    public void setJumlahBaterai(int jumlahBaterai) {
        this.jumlahBaterai = jumlahBaterai;
    }

    public int getJumlahBaterai() {
        return this.jumlahBaterai;
    }
}
