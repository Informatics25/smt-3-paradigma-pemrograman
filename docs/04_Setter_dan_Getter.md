# 04. Method Setter dan Getter pada C++

Materi ini membahas Akses Data Terkontrol yang bersumber dari Video #4 dengan durasi 17:19.

## Pemahaman Dasar
* **Apa itu?** Setter adalah method untuk mengisi atau mengubah nilai property[cite: 1]. Getter adalah method untuk membaca nilai property[cite: 1].
* **Mengapa digunakan?** Konsep ini memberikan kontrol dan validasi sebelum data dimasukkan atau dibaca[cite: 1].
* **Masalah apa yang diselesaikan?** Hal ini mencegah pengisian nilai yang tidak valid (misal: umur berharga negatif, saldo bernilai tak terhingga)[cite: 1].
* **Bagaimana cara kerjanya?** Property dibuat terlindungi, lalu dibuatkan fungsi publik Setter (dengan parameter) dan Getter (dengan return value)[cite: 1].
* **Kapan digunakan?** Digunakan saat property tidak boleh diubah secara bebas oleh kode luar[cite: 1].
* **Bagaimana hubungannya dengan konsep lain?** Ini merupakan pintu masuk utama untuk menerapkan prinsip Encapsulation[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Setter mengubah nilai dengan validasi, sedangkan Getter membaca nilai[cite: 1].
* **Mengapa Penting:** Menjaga integritas data agar tidak diisi nilai sembarangan[cite: 1].
* **Contoh Penggunaan:** Terdapat pemeriksaan `if (s >= 0)` dalam fungsi `setSaldo()`[cite: 1].
* **Hubungan Materi Berikutnya:** Mekanisme Setter dan Getter membutuhkan Access Modifiers (`private` & `public`) secara menyeluruh[cite: 1].

## ⚠️ Kesalahan Umum Pemula
* **Lupa Return pada Getter:** Kesalahan yang sering terjadi adalah lupa mengembalikan nilai (`return`) pada fungsi Getter[cite: 1].