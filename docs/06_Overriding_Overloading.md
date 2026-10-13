# 06. Overriding dan Overloading pada C++

Materi ini membahas Polimorfisme & Fleksibilitas Method yang bersumber dari Video #6 dengan durasi 17:08.

## Pemahaman Dasar
* **Apa itu?** Overriding adalah menulis ulang method induk pada class anak dengan nama dan parameter sama persis[cite: 1]. Overloading adalah membuat fungsi bernama sama dalam class dengan jumlah/tipe parameter berbeda[cite: 1].
* **Mengapa digunakan?** Konsep ini memberikan spesialisasi perilaku pada class anak (Overriding) dan memberikan pilihan variasi cara pemanggilan fungsi (Overloading)[cite: 1].
* **Masalah apa yang diselesaikan?** Mencegah kekakuan di mana class anak terpaksa menggunakan perilaku induk yang tidak sesuai[cite: 1].
* **Bagaimana cara kerjanya?** C++ mencocokkan tipe parameter (Overloading) atau memilih implementasi di Child Class saat dipanggil (Overriding)[cite: 1].
* **Kapan digunakan?** Overriding dipakai saat Child Class butuh aksi beda dari Parent[cite: 1]. Overloading dipakai saat opsi masukan berbeda-beda[cite: 1].
* **Bagaimana hubungannya dengan konsep lain?** Memungkinkan sifat Polimorfisme pada hirarki Inheritance[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Overriding = timpa method induk; Overloading = variasi parameter[cite: 1].
* **Mengapa Penting:** Meningkatkan fleksibilitas dan keterbacaan kode[cite: 1].
* **Contoh Penggunaan:** Method `Kucing::bersuara()` menggantikan `Hewan::bersuara()`[cite: 1].
* **Hubungan Materi Berikutnya:** Membatasi akses luar terhadap method/property menggunakan Encapsulation[cite: 1].

## ⚠️ Kesalahan Umum Pemula
* Mengubah parameter saat berniat melakukan Overriding (malah secara tidak sengaja menjadi Overloading)[cite: 1]. Pada Overriding, nama dan parameter fungsi HARUS SAMA dengan class induknya[cite: 1].