from Cpu import Cpu
from Gpu import Gpu
from Ram import Ram
from Harddrive import Harddrive
from Pc import Pc
from Laptop import Laptop

# Fungsi untuk mencetak header
def print_header(title):
    print("\n" + "=" * 42)
    print(f"           {title}           ")
    print("=" * 42)

def main():
    # Membuat Komponen untuk PC
    pc_cpu = Cpu(16, True, 8, 3.5, "Intel", 5000000)
    pc_gpu = Gpu(8, "CUDA", 3584, 1770.0, "NVIDIA", 5990000)
    ram1 = Ram(16, 3200, "DDR5", "Corsair", 1500000)
    ram2 = Ram(16, 3200, "DDR4", "Kingston", 1400000)
    hdd1 = Harddrive(1000, "HDD", "Seagate", 1200000)
    hdd2 = Harddrive(512, "SSD", "Samsung", 2500000)

    # Membuat Komponen untuk Laptop
    laptop_cpu = Cpu(8, True, 16, 4.0, "AMD Ryzen", 7000000)
    laptop_gpu = Gpu(6, "RDNA", 2048, 1600.0, "AMD Radeon", 4500000)
    laptop_ram = Ram(16, 3200, "DDR5", "G.Skill", 1600000)
    laptop_hdd = Harddrive(1000, "SSD", "Western Digital", 2700000)

    # Membuat PC
    my_pc = Pc("Orang Kaya", pc_cpu, pc_gpu, [ram1, ram2], [hdd1, hdd2], "Windows 11", "PC Gaming", 750, "Liquid Cooling", 4)

    # Membuat Laptop
    my_laptop = Laptop("Mahasiswa Baru", laptop_cpu, laptop_gpu, [laptop_ram], [laptop_hdd], "MacOS", "Ultrabook", 6000, 1.5, 1)

    # Menampilkan Data PC
    print_header("PC SPECIFICATIONS")
    print(f"{'Pemilik':<15}: {my_pc.get_pemilik()}")
    print(f"{'OS':<15}: {my_pc.get_os()}")
    print(f"{'Jenis':<15}: {my_pc.get_jenis()}")
    print(f"{'CPU':<15}: {my_pc.get_cpu().get_merk()}, {my_pc.get_cpu().get_core_count()} Cores, {my_pc.get_cpu().get_clock_speed()} GHz, {'HyperThreading available' if my_pc.get_cpu().get_hyper_threading() else 'HyperThreading unavailable'}")
    print(f"{'GPU':<15}: {my_pc.get_gpu().get_merk()}, {my_pc.get_gpu().get_vram_size()} GB VRAM, {my_pc.get_gpu().get_architecture()} Architecture, {my_pc.get_gpu().get_core_count()} Cores, {my_pc.get_gpu().get_clock_speed()} MHz")
    
    print(f"{'RAM':<15}: " + " ".join(f"{r.get_merk()} {r.get_kapasitas()}GB {r.get_tipe()}" for r in my_pc.get_ram_list()))
    print(f"{'Hard Drive':<15}: " + " ".join(f"{h.get_merk()} {h.get_tipe()} {h.get_kapasitas()}GB" for h in my_pc.get_harddrive_list()))
    
    print(f"{'Power Supply':<15}: {my_pc.get_daya_psu()} Watt")
    print(f"{'Cooling':<15}: {my_pc.get_jenis_pendingin()}")
    print(f"{'Expansion Slots':<15}: {my_pc.get_jumlah_slot_expan()} slots")

    # Menampilkan Data Laptop
    print_header("LAPTOP SPECIFICATIONS")
    print(f"{'Pemilik':<15}: {my_laptop.get_pemilik()}")
    print(f"{'OS':<15}: {my_laptop.get_os()}")
    print(f"{'Jenis':<15}: {my_laptop.get_jenis()}")
    print(f"{'CPU':<15}: {my_laptop.get_cpu().get_merk()}, {my_laptop.get_cpu().get_core_count()} Cores, {my_laptop.get_cpu().get_clock_speed()} GHz, {'HyperThreading available' if my_laptop.get_cpu().get_hyper_threading() else 'HyperThreading unavailable'}")
    print(f"{'GPU':<15}: {my_laptop.get_gpu().get_merk()}, {my_laptop.get_gpu().get_vram_size()} GB VRAM, {my_laptop.get_gpu().get_architecture()} Architecture, {my_laptop.get_gpu().get_core_count()} Cores, {my_laptop.get_gpu().get_clock_speed()} MHz")
    
    print(f"{'RAM':<15}: " + " ".join(f"{r.get_merk()} {r.get_kapasitas()}GB {r.get_tipe()}" for r in my_laptop.get_ram_list()))
    print(f"{'Hard Drive':<15}: " + " ".join(f"{h.get_merk()} {h.get_tipe()} {h.get_kapasitas()}GB" for h in my_laptop.get_harddrive_list()))
    
    print(f"{'Battery':<15}: {my_laptop.get_kapasitas_baterai()} mAh")
    print(f"{'Weight':<15}: {my_laptop.get_berat()} kg")
    print(f"{'Batteries':<15}: {my_laptop.get_jumlah_baterai()}")

if __name__ == "__main__":
    main()
