public class Cpu extends Processor {
    private int cacheSize;
    private boolean hyperThreading;

    public Cpu(int cacheSize, boolean hyperThreading, int coreCount, double clockSpeed, String merk, int harga) {
        super(coreCount, clockSpeed, merk, harga);
        this.cacheSize = cacheSize;
        this.hyperThreading = hyperThreading;
    }

    public void setCacheSize(int cacheSize) {
        this.cacheSize = cacheSize;
    }

    public int getCacheSize() {
        return this.cacheSize;
    }

    public void setHyperThreading(boolean hyperThreading) {
        this.hyperThreading = hyperThreading;
    }

    public boolean getHyperThreading() {
        return this.hyperThreading;
    }
}
