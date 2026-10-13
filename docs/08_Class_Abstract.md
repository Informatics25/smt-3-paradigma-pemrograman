# 08. Class Abstract (Abstraksi) pada C++

Materi ini membahas Kerangka Kerja dan Contract Programming yang bersumber dari Video #8 dengan durasi 12:05.

## Pemahaman Dasar
* **Apa itu?** Class Abstract adalah class rancangan yang tidak bisa diinstansiasi secara langsung karena memiliki minimal satu Pure Virtual Function (`virtual void func() = 0;`)[cite: 1].
* **Mengapa digunakan?** Menetapkan standar kerangka kerja (kontrak) wajib yang HARUS diimplementasikan oleh semua class turunan[cite: 1].
* **Masalah apa yang diselesaikan?** Mencegah class turunan lupa membuat method krusial yang diwajibkan oleh arsitektur sistem[cite: 1].
* **Bagaimana cara kerjanya?** Jika class anak tidak meng-override Pure Virtual Function, class anak tersebut juga otomatis menjadi Class Abstract dan tidak bisa dibuat objeknya[cite: 1].
* **Kapan digunakan?** Digunakan saat merancang cetak biru tingkat atas bagi banyak tim atau module[cite: 1].
* **Bagaimana hubungannya dengan konsep lain?** Wujud paling murni dari abstraksi desain PBO[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Class Abstract adalah cetak biru kerangka yang wajib di-override anak[cite: 1].
* **Mengapa Penting:** Menjamin konsistensi antarmuka method antar banyak class turunan[cite: 1].
* **Contoh Penggunaan:** `virtual double hitungLuas() = 0;` memaksa `Persegi` membuat fungsi `hitungLuas()`[cite: 1].
* **Hubungan Materi Berikutnya:** Seluruh konsep 1–8 digabungkan untuk membangun studi kasus proyek nyata[cite: 1].

## ⚠️ Kesalahan Umum Pemula
* **Menginstansiasi Abstract Class:** Mencoba menulis `BangunDatar bd;` padahal `BangunDatar` memiliki Pure Virtual Function[cite: 1]. Abstract Class HANYA bisa dijadikan class induk[cite: 1].
* Lupa mengimplementasikan Pure Virtual Function di class anak, lalu bingung mengapa class anak tidak bisa diinstansiasi[cite: 1].