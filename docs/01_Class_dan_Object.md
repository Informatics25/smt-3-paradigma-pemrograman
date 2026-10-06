# 01. Class dan Object pada C++

Materi ini merupakan Fondasi Utama PBO yang bersumber dari Video #1 dengan durasi 18:00.

## Pemahaman Dasar
* **Apa itu?** Class adalah tipe data bentukan atau cetak biru (blueprint) yang mendefinisikan variabel (property) dan fungsi (method)[cite: 1]. Object adalah bentuk nyata (instance) dari Class yang menempati lokasi memori[cite: 1].
* **Mengapa digunakan?** Konsep ini digunakan untuk mengelompokkan data dan fungsi yang berhubungan ke dalam satu unit terstruktur, alih-alih menggunakan variabel terpisah yang berantakan[cite: 1].
* **Masalah apa yang diselesaikan?** Pemrograman prosedural biasa sulit mengelola data entitas yang kompleks (misal data Mahasiswa, Mobil, Produk) secara efisien[cite: 1].
* **Bagaimana cara kerjanya?** Programmer mendefinisikan struktur Class terlebih dahulu[cite: 1]. Saat program dijalankan, instansiasi dilakukan untuk mengalokasikan memori bagi Object[cite: 1].
* **Kapan digunakan?** Digunakan saat membangun sistem yang melibatkan entitas nyata atau konsep abstrak bernilai kompleks[cite: 1].
* **Bagaimana hubungannya dengan konsep lain?** Ini merupakan fondasi utama PBO, di mana tanpa Class, Object tidak bisa dibuat[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Class adalah blueprint, sedangkan Object adalah instansi nyata[cite: 1].
* **Mengapa Penting:** Memungkinkan abstraksi dunia nyata ke dalam kode C++[cite: 1].
* **Contoh Penggunaan:** Membuat objek `mhs1` dari class `Mahasiswa`[cite: 1].
* **Hubungan Materi Berikutnya:** Class memerlukan Property dan Method di dalamnya untuk menyimpan data dan perilaku[cite: 1].

## ⚠️ Kesalahan Umum & Miskonsepsi Pemula
* **Akses Default Private:** Mengakses anggota class tanpa keyword `public:` akan menyebabkan error, karena secara default di C++ anggota class bersifat private[cite: 1]. Jika Anda lupa menuliskan `public:` di awal deklarasi class, semua property dan method tidak bisa diakses sama sekali dari fungsi `main()`[cite: 1].
* **Lupa Titik Koma pada Class:** Penulisan definisi class (seperti `class Mahasiswa { ... }`) tanpa titik koma `;` di akhir kurung kurawal akan memicu Syntax Error pada C++[cite: 1].