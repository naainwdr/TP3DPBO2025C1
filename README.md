# TP3DPBO2025C1

Saya Nina Wulandari dengan NIM 2312091 mengerjakan Tugas Praktikum 3 dalam mata kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Desain Diagram



# Penjelasan Atribut dan Methods
1. Class Petshop
   * id → ID produk
   * nama_produk → Nama produk
   * harga_produk → Harga produk
   * stok_produk → Stok produk
   * foto_produk → Foto produk (khusus PHP)

2. Class Aksesoris (Turunan dari Petshop)
   * jenis → Jenis aksesoris
   * bahan → Bahan aksesoris
   * warna → Warna aksesoris

3. Class Baju (Turunan dari Aksesoris)
   * untuk → Hewan yang cocok menggunakan produk ini
   * size → Ukuran produk
   * merk → Merk produk

Masing-masing class memiliki Methods:
* Getter di tiap atribut untuk mengambil nilai dari atribut suatu objek.
* Setter di tiap atribut untuk menetapkan nilai atribut suatu objek.

# Penjelasan Alur Program C++, Python, dan Java
* Program mendefinisikan tiga class (Petshop, Aksesoris, Baju) dimana baju mewarisi Aksesoris, dan Aksesoris mewarisi Petshop.
* Di dalam main, sebuah list digunakan untuk menyimpan produk yang telah didefinisikan sebelumnya.
* Pertama, program meminta user untuk memasukkan sebuah data produk baru (ID, nama, harga, stok, jenis, bahan, warna, untuk siapa, ukuran, merk).
* Data ini kemudian disimpan ke dalam list.
* Kemudiann fungsi displayTable() akan menampilkan daftar produk dalam bentuk tabel dengan lebar kolom yang disesuaikan secara dinamis menyesuaikan valuenya.
* Data yang sudah ada dan data baru yang diinput akan ditampilkan.
* Terakhir, setelah menampilkan tabel, program akan langsung exit/selesai dijalankan.

# Penjelasan Alur Program PHP
* Program mendefinisikan tiga class (Petshop, Aksesoris, Baju) dimana baju mewarisi Aksesoris, dan Aksesoris mewarisi Petshop.
* Dalam index, program menampilkan 2 fitur, yaitu Form tambah produk dan Tampilan tabel daftar produk
* User akan menambahkan data produk melalui form
* Data masukan yang baru akan di set dan post ke tabel daftar produk
* Data produk hanya berlaku saat sesi itu, setelah refresh akan mulai dari mula

# Dokumentasi Program
## CPP
![Dokum TP3 CPP](https://github.com/user-attachments/assets/c651218f-16c6-415a-8f0e-13612488c5f7)

## PYTHON
![Dokum TP3 Python](https://github.com/user-attachments/assets/d9180bb6-696e-48fd-a96f-60392049a5c9)

## JAVA



## PYTHON
![Dokum python](https://github.com/user-attachments/assets/51fd1b0e-d3df-4797-b8b6-d5eeb647bf56)

## PHP
![Dokum PHP (sebelum add)](https://github.com/user-attachments/assets/cb3d0594-841c-488d-b13e-e7c78f45c36a)
