# 🚀 Progress & Roadmap Latihan Pemrograman

Repository ini berisi catatan perjalanan dan penyelesaian tugas latihan logika dasar pemrograman.

---

## ✅ Phase 1: Dasar Banget (Sequential & Logic)

- [x] **1. Program Konversi Nilai Ujian**
  - **Input:** Angka nilai (misal: 85).
  - **Logika:** Single/Nested `if-else`.
  - **Output:** Grade huruf (A/B/C/D).

- [x] **2. Program Konversi Suhu**
  - **Input:** Suhu Celcius.
  - **Logika:** Rumus konversi ($F = C \times \frac{9}{5} + 32$).
  - **Output:** Hasil konversi Celcius ke Fahrenheit & Kelvin.

- [x] **3. Program Penghitung Luas & Keliling Bangun Datar**
  - **Input:** Panjang dan lebar persegi panjang.
  - **Logika:** $Luas = p \times l$, $Keliling = 2 \times (p + l)$.
  - **Output:** Nilai luas dan keliling.

- [x] **4. Kalkulator Dua Angka Sederhana**
  - **Input:** Angka 1 $\rightarrow$ Operator (+, -, *, /) $\rightarrow$ Angka 2.
  - **Logika:** Perhitungan sequential satu kali jalan.
  - **Output:** Hasil kalkulasi.

---

## 🎯 Phase 2: Perulangan & Validasi (Level Up)

### ✅ 5. Kalkulator Interaktif (Looping + Exit Condition)
* **Fokus Konsep:** Perulangan `while`, Kondisi Henti (*Exit condition*).
* **Deskripsi:** 
  Mengubah Kalkulator dasar agar bisa digunakan berulang kali tanpa harus me-restart program.
* **Alur Logika:**
  1. Jalankan kalkulator (input angka & operator).
  2. Tampilkan hasil perhitungannya.
  3. Tanya pengguna: `"Hitung lagi? (y/n)"`.
  4. Jika input `y` atau `Y`, ulang alur dari awal. Jika `n` atau `N`, keluar dari program.

---

### ✅ 6. Program Cek Angka Ganjil / Genap
* **Fokus Konsep:** Operator Modulo (`%`), Validasi Tipe Data.
* **Deskripsi:** 
  Menentukan sifat angka yang diinputkan pengguna.
* **Alur Logika:**
  1. Minta input angka dari pengguna.
  2. Validasi: Pastikan input adalah angka positif. Jika bukan, tampilkan pesan error.
  3. Cek logika: Jika `angka % 2 == 0` maka Genap, selain itu Ganjil.
  4. Tampilkan status angka.

---

### ✅ 7. Game Tebak Angka
* **Fokus Konsep:** Library Random, Counter / Iterasi Perulangan.
* **Deskripsi:** 
  Komputer memilih satu angka rahasia (1–10), pengguna menebak hingga benar.
* **Alur Logika:**
  1. Generate angka acak antara 1–10.
  2. Inisialisasi variabel `jumlah_percobaan = 0`.
  3. Gunakan loop: Minta tebakan pengguna.
  4. Tambahkan `1` ke `jumlah_percobaan` setiap tebakan.
  5. Berikan hint:
     - Jika tebakan > angka rahasia $\rightarrow$ `"Terlalu besar!"`
     - Jika tebakan < angka rahasia $\rightarrow$ `"Terlalu kecil!"`
  6. Saat tebakan pas, beri ucapan selamat beserta total percobaannya.

---

## 📊 Phase 3: Array / List & Manipulasi Data

### 🔲 8. Program Kasir & Total Belanja
* **Fokus Konsep:** `List` / `Array`, Penjumlahan Akumulatif.
* **Deskripsi:** 
  Mencatat beberapa harga barang dan menghitung total harga serta rata-ratanya.
* **Alur Logika:**
  1. Buat list kosong untuk menampung data harga.
  2. Minta input harga barang berulang kali.
  3. Penginputan berhenti jika pengguna memasukkan angka `0`.
  4. Hitung dan tampilkan:
     - Daftar harga yang dimasukkan.
     - Total belanjaan.
     - Rata-rata harga per barang.

---

### 🔲 9. Analisis Nilai Kelas (Min / Max / Average)
* **Fokus Konsep:** Pencarian nilai ekstrem dalam `Array`.
* **Deskripsi:** 
  Memproses sekumpulan nilai siswa untuk menemukan statistik dasar.
* **Alur Logika:**
  1. Input 5 atau lebih nilai siswa ke dalam sebuah Array.
  2. Iterasi isi Array untuk mencari:
     - Nilai Tertinggi (`Max`)
     - Nilai Terendah (`Min`)
     - Rata-rata Nilai (`Average`)
  3. Tampilkan ringkasan hasilnya ke layar.

---

## 🛠️ Catatan Tambahan
- **Bahasa yang digunakan:** *CSS*
- **Status:** Dalam Pengerjaan Phase 3