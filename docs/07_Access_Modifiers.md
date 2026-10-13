# 07. Access Modifiers (Encapsulation) pada C++

Materi ini membahas Proteksi dan Pengkapsulan Data yang bersumber dari Video #7 dengan durasi 19:27.

## Pemahaman Dasar
* **Apa itu?** Encapsulation adalah teknik membungkus data dan membatasi akses langsung dari luar menggunakan Access Modifiers[cite: 1].
* **Apa saja jenis Access Modifiers?** Terdapat tiga jenis utama, yaitu `public` (bebas), `private` (hanya internal class), dan `protected` (internal class & child class)[cite: 1].
* **Mengapa digunakan?** Melindungi status internal objek agar tidak rusak oleh akses tidak sah di luar class[cite: 1].
* **Masalah apa yang diselesaikan?** Mencegah variabel publik diubah secara tidak sengaja dari mana saja tanpa kontrol[cite: 1].
* **Bagaimana cara kerjanya?** Compiler C++ menolak akses terhadap anggota `private` atau `protected` jika dipanggil langsung dari luar scope class[cite: 1].
* **Kapan digunakan?** Wajib digunakan pada arsitektur sistem yang mengutamakan keamanan data[cite: 1].
* **Bagaimana hubungannya dengan konsep lain?** Menyempurnakan Setter & Getter dan mengatur batas keamanan pada Inheritance[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Enkapsulasi menyembunyikan detail internal demi keamanan[cite: 1].
* **Mengapa Penting:** Menjaga integritas data dari modifikasi liar[cite: 1].
* **Contoh Penggunaan:** Menjadikan property `balance` bersifat `private` dan menyediakan method `getBalance()`[cite: 1].
* **Hubungan Materi Berikutnya:** Arsitektur kelas yang terenkapsulasi dapat dipolakan menggunakan Class Abstract[cite: 1].

## ⚠️ Kesalahan Umum Pemula
* Menjadikan semua property `public` hanya karena malas membuat fungsi Setter dan Getter[cite: 1].