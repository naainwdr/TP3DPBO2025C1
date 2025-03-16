public class Processor extends Komponen {
    private int coreCount;
    private double clockSpeed;

    public Processor(int coreCount, double clockSpeed, String merk, int harga) {
        super(merk, harga);
        this.coreCount = coreCount;
        this.clockSpeed = clockSpeed;
    }

    public void setCoreCount(int coreCount) {
        this.coreCount = coreCount;
    }

    public int getCoreCount() {
        return this.coreCount;
    }

    public void setClockSpeed(double clockSpeed) {
        this.clockSpeed = clockSpeed;
    }

    public double getClockSpeed() {
        return this.clockSpeed;
    }
}
