public class Gpu extends Processor {
    private int vramSize;
    private String architecture;

    public Gpu(int vramSize, String architecture, int coreCount, double clockSpeed, String merk, int harga) {
        super(coreCount, clockSpeed, merk, harga);
        this.vramSize = vramSize;
        this.architecture = architecture;
    }

    public void setVramSize(int vramSize) {
        this.vramSize = vramSize;
    }

    public int getVramSize() {
        return this.vramSize;
    }

    public void setArchitecture(String architecture) {
        this.architecture = architecture;
    }

    public String getArchitecture() {
        return this.architecture;
    }
}
