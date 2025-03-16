import java.util.List;

public class Main {
	private static void printHeader(String title) {
        System.out.println("\n==========================================");
        System.out.println("           " + title + "           ");
        System.out.println("==========================================");
    }
	
    public static void main(String[] args) {
        // Membuat Komponen untuk PC
        Cpu pcCpu = new Cpu(12, false, 6, 3.8, "AMD", 4500000);
        Gpu pcGpu = new Gpu(10, "RDNA2", 4000, 1900.0, "AMD Radeon", 6500000);
        Ram ram1 = new Ram(32, 3600, "DDR4", "G.Skill", 1800000);
        Ram ram2 = new Ram(16, 3000, "DDR4", "HyperX", 1300000);
        Harddrive hdd1 = new Harddrive(2000, "HDD", "Toshiba", 1000000);
        Harddrive hdd2 = new Harddrive(1000, "SSD", "Crucial", 2200000);

        // Membuat Komponen untuk Laptop
        Cpu laptopCpu = new Cpu(10, true, 20, 3.9, "Intel Core", 8000000);
        Gpu laptopGpu = new Gpu(8, "Turing", 2500, 1700.0, "NVIDIA", 5000000);
        Ram laptopRam = new Ram(16, 3200, "DDR5", "Samsung", 1700000);
        Harddrive laptopHdd = new Harddrive(512, "SSD", "Kingston", 2600000);

        // Membuat PC
        Pc myPc = new Pc("Gamer Pro", pcCpu, pcGpu, List.of(ram1, ram2), List.of(hdd1, hdd2), 
                  "Windows 10", "Workstation", 850, "Air Cooling", 3);

        // Membuat Laptop
        Laptop myLaptop = new Laptop("Dosen Informatika", laptopCpu, laptopGpu, List.of(laptopRam), 
                          List.of(laptopHdd), "Linux", "Gaming Laptop", 7000, 2.0, 1);

        // Menampilkan Data PC
        printHeader("PC SPECIFICATIONS");
        System.out.println("Pemilik        : " + myPc.getPemilik());
        System.out.println("OS             : " + myPc.getOs());
        System.out.println("Jenis          : " + myPc.getJenis());
        System.out.println("CPU            : " + myPc.getCpu().getMerk() + ", " + 
                            myPc.getCpu().getCoreCount() + " Cores, " +
                            myPc.getCpu().getClockSpeed() + " GHz, " +
                            (myPc.getCpu().getHyperThreading() ? "HyperThreading available" : "HyperThreading unavailable"));
        System.out.println("GPU            : " + myPc.getGpu().getMerk() + ", " + 
                            myPc.getGpu().getVramSize() + " GB VRAM, " +
                            myPc.getGpu().getArchitecture() + " Architecture, " +
                            myPc.getGpu().getCoreCount() + " Cores, " +
                            myPc.getGpu().getClockSpeed() + " MHz");

        System.out.println("RAM            : " + myPc.getRamList().stream()
                .map(r -> r.getMerk() + " " + r.getKapasitas() + "GB " + r.getTipe())
                .reduce((a, b) -> a + ", " + b).orElse(""));

        System.out.println("Hard Drive     : " + myPc.getHarddriveList().stream()
                .map(h -> h.getMerk() + " " + h.getTipe() + " " + h.getKapasitas() + "GB")
                .reduce((a, b) -> a + ", " + b).orElse(""));

        System.out.println("Power Supply   : " + myPc.getDayaPsu() + " Watt");
        System.out.println("Cooling        : " + myPc.getJenisPendingin());
        System.out.println("Expansion Slots: " + myPc.getJumlahSlotExpan() + " slots");

        // Menampilkan Data Laptop
        printHeader("LAPTOP SPECIFICATIONS");
        System.out.println("Pemilik       : " + myLaptop.getPemilik());
        System.out.println("OS            : " + myLaptop.getOs());
        System.out.println("Jenis         : " + myLaptop.getJenis());
        System.out.println("CPU           : " + myLaptop.getCpu().getMerk() + ", " + 
                            myLaptop.getCpu().getCoreCount() + " Cores, " +
                            myLaptop.getCpu().getClockSpeed() + " GHz, " +
                            (myLaptop.getCpu().getHyperThreading() ? "HyperThreading available" : "HyperThreading unavailable"));
        System.out.println("GPU           : " + myLaptop.getGpu().getMerk() + ", " + 
                            myLaptop.getGpu().getVramSize() + " GB VRAM, " +
                            myLaptop.getGpu().getArchitecture() + " Architecture, " +
                            myLaptop.getGpu().getCoreCount() + " Cores, " +
                            myLaptop.getGpu().getClockSpeed() + " MHz");

        System.out.println("RAM           : " + myLaptop.getRamList().stream()
                .map(r -> r.getMerk() + " " + r.getKapasitas() + "GB " + r.getTipe())
                .reduce((a, b) -> a + ", " + b).orElse(""));

        System.out.println("Hard Drive    : " + myLaptop.getHarddriveList().stream()
                .map(h -> h.getMerk() + " " + h.getTipe() + " " + h.getKapasitas() + "GB")
                .reduce((a, b) -> a + ", " + b).orElse(""));

        System.out.println("Battery       : " + myLaptop.getKapasitasBaterai() + " mAh");
        System.out.println("Weight        : " + myLaptop.getBerat() + " kg");
        System.out.println("Batteries     : " + myLaptop.getJumlahBaterai());
    }
}
