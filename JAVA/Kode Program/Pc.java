import java.util.List;

public class Pc extends Komputer {
    private int dayaPsu;
    private String jenisPendingin;
    private int jumlahSlotExpan;

    public Pc(String pemilik, Cpu cpu, Gpu gpu, List<Ram> ramList, List<Harddrive> harddriveList,
              String os, String jenis, int dayaPsu, String jenisPendingin, int jumlahSlotExpan) {
        super(pemilik, cpu, gpu, ramList, harddriveList);
        this.setOs(os);
        this.setJenis(jenis);
        this.dayaPsu = dayaPsu;
        this.jenisPendingin = jenisPendingin;
        this.jumlahSlotExpan = jumlahSlotExpan;
    }

    public void setDayaPsu(int dayaPsu) {
        this.dayaPsu = dayaPsu;
    }

    public int getDayaPsu() {
        return this.dayaPsu;
    }

    public void setJenisPendingin(String jenisPendingin) {
        this.jenisPendingin = jenisPendingin;
    }

    public String getJenisPendingin() {
        return this.jenisPendingin;
    }

    public void setJumlahSlotExpan(int jumlahSlotExpan) {
        this.jumlahSlotExpan = jumlahSlotExpan;
    }

    public int getJumlahSlotExpan() {
        return this.jumlahSlotExpan;
    }
}
