# TP3DPBO2025C1

Saya Nina Wulandari dengan NIM 2312091 mengerjakan Tugas Praktikum 3 dalam mata kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Desain Diagram



# Penjelasan Atribut dan Methods
1. Class Komponen
   * string merk → Menyimpan merek (brand) dari komponen.
   * int harga → Menyimpan harga dari komponen.
     
2. Class Ram
   * int kapasitas → Menyimpan kapasitas RAM.
   * int kecepatan → Menyimpan kecepatan RAM.
   * string tipe → Menyimpan tipe RAM (DDR4, DDR5, dll).
     
3. Class Processor
   * int core_count → Menyimpan jumlah core pada processor.
   * double clock_speed → Menyimpan kecepatan clock processor.
     
4. Class Harddrive
   * int kapasitas → Menyimpan kapasitas penyimpanan.
   * string tipe → Menyimpan tipe penyimpanan (HDD/SSD).
     
5. Class Gpu
   * int vram_size → Menyimpan ukuran VRAM dari GPU.
   * string architecture → Menyimpan arsitektur GPU.
     
6. Class Cpu
   * int cache_size → Menyimpan ukuran cache CPU.
   * bool hyper_threading → Menyimpan status dukungan hyper-threading.
     
7. Class Komputer
   * string pemilik → Menyimpan nama pemilik komputer.
   * string os → Menyimpan sistem operasi yang digunakan.
   * string jenis → Menyimpan jenis komputer (PC/Laptop).
   * Cpu cpu → Menyimpan informasi CPU yang digunakan.
   * Gpu gpu → Menyimpan informasi GPU yang digunakan.
   * list<Ram> ram_list → Menyimpan daftar RAM yang terpasang.
   * list<Harddrive> harddrive_list → Menyimpan daftar hard drive yang terpasang.
     
  Methods:
  * void add_ram(Ram ram) → Menambahkan RAM ke dalam daftar RAM.
  * void add_harddrive(Harddrive harddrive) → Menambahkan hard drive ke dalam daftar hard
    drive.
    
8. Class Laptop
   * int kapasitas_baterai → Menyimpan kapasitas baterai laptop.
   * double berat → Menyimpan berat laptop.
   * int jumlah_baterai → Menyimpan jumlah baterai yang digunakan.
     
9. Class Pc
   * int daya_psu → Menyimpan daya PSU dalam watt.
   * string jenis_pendingin → Menyimpan jenis sistem pendingin yang digunakan.
   * int jumlah_slot_expan → Menyimpan jumlah slot ekspansi yang tersedia.
     
Masing-masing class memiliki Methods:
* Getter di tiap atribut untuk mengambil nilai dari atribut suatu objek.
* Setter di tiap atribut untuk menetapkan nilai atribut suatu objek.


# Penjelasan Alur Class
* Komponen sebagai kelas dasar menyimpan atribut merk dan harga.
* Processor, Ram, dan Harddrive adalah child dari Komponen.
* Cpu dan Gpu adalah child dari Processor untuk menyimpan detail CPU dan GPU.
* Komputer sebagai parent dari class Laptop dan Pc


# Penjelasan Alur Program C++, Python, dan Java
* Dalam main kita buat objek dari child kelas komponen dahulu untuk bisa membuat kelas laptop dan atau pc dengan mengisi parameternya.
* Kemudian komponen yang telah dibuat ditambahkan ke dalam objek Laptop atau Pc. CPU dan GPU diatur langsung, sedangkan RAM dan hard drive disimpan dalam daftar (array of object) untuk membuat objek myPC dan myLaptop
* Membuat header supaya lebih rapih dan hardcode tampilan
* Menampilkan data spesifikasi dari laptop dan pc sesuai dengan atributnya


# Dokumentasi Program
## CPP
![Dokum TP3 CPP](https://github.com/user-attachments/assets/c651218f-16c6-415a-8f0e-13612488c5f7)

## PYTHON
![Dokum TP3 Python](https://github.com/user-attachments/assets/d9180bb6-696e-48fd-a96f-60392049a5c9)

## JAVA
![Dokum TP3 Java](https://github.com/user-attachments/assets/a2c6b963-50ad-4877-a697-7aeeb7b347db)
