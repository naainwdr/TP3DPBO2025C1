import java.util.ArrayList;
import java.util.List;

public class Komputer {
    private String pemilik;
    private String os;
    private String jenis;
    private Cpu cpu;
    private Gpu gpu;
    private List<Ram> ramList;
    private List<Harddrive> harddriveList;

	public Komputer(String pemilik, Cpu cpu, Gpu gpu, List<Ram> ramList, List<Harddrive> harddriveList) {
		this.pemilik = pemilik;
		this.os = "";
		this.jenis = "";
		this.cpu = cpu;
		this.gpu = gpu;
		this.ramList = ramList;
		this.harddriveList = harddriveList;
	}
	
    public void setPemilik(String pemilik) {
        this.pemilik = pemilik;
    }

    public String getPemilik() {
        return this.pemilik;
    }

    public void setOs(String os) {
        this.os = os;
    }

    public String getOs() {
        return this.os;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    public String getJenis() {
        return this.jenis;
    }

    public void setCpu(Cpu cpu) {
        this.cpu = cpu;
    }

    public Cpu getCpu() {
        return this.cpu;
    }

    public void setGpu(Gpu gpu) {
        this.gpu = gpu;
    }

    public Gpu getGpu() {
        return this.gpu;
    }

    public void setRamList(List<Ram> ramList) {
        this.ramList = ramList;
    }

    public List<Ram> getRamList() {
        return this.ramList;
    }

    public void addRam(Ram ram) {
        ramList.add(ram);
    }

    public void setHarddriveList(List<Harddrive> harddriveList) {
        this.harddriveList = harddriveList;
    }

    public List<Harddrive> getHarddriveList() {
        return this.harddriveList;
    }

    public void addHarddrive(Harddrive harddrive) {
        harddriveList.add(harddrive);
    }
}
