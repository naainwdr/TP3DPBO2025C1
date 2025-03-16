#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Gpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Pc.cpp"
#include "Laptop.cpp"

using namespace std;

// Fungsi untuk mencetak header
void printHeader(string title) {
    cout << "\n==========================================" << endl;
    cout << "           " << title << "           " << endl;
    cout << "==========================================" << endl;
}

int main() {
    // Membuat Komponen untuk PC
    Cpu pcCpu(16, true, 8, 3.5, "Intel", 5000000);
    Gpu pcGpu(8, "CUDA", 3584, 1770.0f, "NVIDIA", 5990000);
    Ram ram1(16, 3200, "DDR5", "Corsair", 1500000);
    Ram ram2(16, 3200, "DDR4", "Kingston", 1400000);
    Harddrive hdd1(1000, "HDD", "Seagate", 1200000);
    Harddrive hdd2(512, "SSD", "Samsung", 2500000);

    // Membuat Komponen untuk Laptop
    Cpu laptopCpu(8, true, 16, 4.0, "AMD Ryzen", 7000000);
    Gpu laptopGpu(6, "RDNA", 2048, 1600.0f, "AMD Radeon", 4500000);
    Ram laptopRam(16, 3200, "DDR5", "G.Skill", 1600000);
    Harddrive laptopHdd(1000, "SSD", "Western Digital", 2700000);

    // Membuat PC
    Pc myPc("Orang Kaya", pcCpu, pcGpu, {ram1, ram2}, {hdd1, hdd2}, "Windows 11", "PC Gaming", 750, "Liquid Cooling", 4);

    // Membuat Laptop
    Laptop myLaptop("Mahasiswa Baru", laptopCpu, laptopGpu, {laptopRam}, {laptopHdd}, "MacOS", "Ultrabook", 6000, 1.5, 1);

    // Menampilkan Data PC
    printHeader("PC SPECIFICATIONS");
    cout << left << setw(15) << "Pemilik" << ": " << myPc.getPemilik() << endl;
    cout << left << setw(15) << "OS" << ": " << myPc.getOs() << endl;
    cout << left << setw(15) << "Jenis" << ": " << myPc.getJenis() << endl;
    cout << left << setw(15) << "CPU" << ": " << myPc.getCpu().getMerk() << ", "
         << myPc.getCpu().getCoreCount() << " Cores, " 
         << myPc.getCpu().getClockSpeed() << " GHz, "
         << (myPc.getCpu().getHyperThreading() ? "HyperThreading available" : "HyperThreading unavailable") 
         << endl;
    cout << left << setw(15) << "GPU" << ": " << myPc.getGpu().getMerk() << ", " 
         << myPc.getGpu().getVramSize() << " GB VRAM, " 
         << myPc.getGpu().getArchitecture() << " Architecture, "
         << myPc.getGpu().getCoreCount() << " Cores, "
         << myPc.getGpu().getClockSpeed() << " MHz"
         << endl;

    cout << left << setw(15) << "RAM" << ": ";
    for (Ram r : myPc.getRamList()) {
        cout << r.getMerk() << " " << r.getKapasitas() << "GB " << r.getTipe() << " ";
    }
    cout << endl;

    cout << left << setw(15) << "Hard Drive" << ": ";
    for (Harddrive h : myPc.getHarddriveList()) {
        cout << h.getMerk() << " " << h.getTipe() << " " << h.getKapasitas() << "GB ";
    }
    cout << endl;

    cout << left << setw(15) << "Power Supply" << ": " << myPc.getDayaPSU() << " Watt" << endl;
    cout << left << setw(15) << "Cooling" << ": " << myPc.getJenisPendingin() << endl;
    cout << left << setw(15) << "Expansion Slots" << ": " << myPc.getJumlahSlotExpan() << " slots" << endl;

    // Menampilkan Data Laptop dengan Format Sama seperti PC
    printHeader("LAPTOP SPECIFICATIONS");
    cout << left << setw(15) << "Pemilik" << ": " << myLaptop.getPemilik() << endl;
    cout << left << setw(15) << "OS" << ": " << myLaptop.getOs() << endl;
    cout << left << setw(15) << "Jenis" << ": " << myLaptop.getJenis() << endl;
    cout << left << setw(15) << "CPU" << ": " << myLaptop.getCpu().getMerk() << ", " 
         << myLaptop.getCpu().getCoreCount() << " Cores, " 
         << myLaptop.getCpu().getClockSpeed() << " GHz, "
         << (myLaptop.getCpu().getHyperThreading() ? "HyperThreading available" : "HyperThreading unavailable") 
         << endl;
    cout << left << setw(15) << "GPU" << ": " << myLaptop.getGpu().getMerk() << ", " 
         << myLaptop.getGpu().getVramSize() << " GB VRAM, " 
         << myLaptop.getGpu().getArchitecture() << " Architecture, "
         << myLaptop.getGpu().getCoreCount() << " Cores, "
         << myLaptop.getGpu().getClockSpeed() << " MHz"
         << endl;

    cout << left << setw(15) << "RAM" << ": ";
    for (Ram r : myLaptop.getRamList()) {
        cout << r.getMerk() << " " << r.getKapasitas() << "GB " << r.getTipe() << " ";
    }
    cout << endl;

    cout << left << setw(15) << "Hard Drive" << ": ";
    for (Harddrive h : myLaptop.getHarddriveList()) {
        cout << h.getMerk() << " " << h.getTipe() << " " << h.getKapasitas() << "GB ";
    }
    cout << endl;

    cout << left << setw(15) << "Battery" << ": " << myLaptop.getKapasitasBaterai() << " mAh" << endl;
    cout << left << setw(15) << "Weight" << ": " << myLaptop.getBerat() << " kg" << endl;
    cout << left << setw(15) << "Batteries" << ": " << myLaptop.getJumlahBaterai() << endl;

    return 0;
}
