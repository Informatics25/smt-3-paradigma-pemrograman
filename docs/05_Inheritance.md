# 05. Inheritance (Pewarisan) pada C++

Materi ini membahas Reusability dan Hirarki Class yang bersumber dari Video #5 dengan durasi 25:27.

## Pemahaman Dasar
* **Apa itu?** Inheritance adalah mekanisme di mana suatu Class turunan (Child/Derived Class) mewarisi property dan method dari Class induk (Parent/Base Class)[cite: 1].
* **Mengapa digunakan?** Menghindari duplikasi kode dan membangun hubungan 'is-a' antar class[cite: 1].
* **Masalah apa yang diselesaikan?** Mencegah penulisan ulang property dan method yang sama pada banyak class yang sejenis[cite: 1].
* **Bagaimana cara kerjanya?** Sintaks `class Child : public Parent` membuat Child Class langsung memiliki anggota publik/protected dari Parent Class[cite: 1].
* **Kapan digunakan?** Digunakan saat ada beberapa class yang memiliki kesamaan atribut dan fungsi dasar[cite: 1].
* **Bagaimana hubungannya dengan konsep lain?** Memperluas struktur Class individual menjadi hirarki keluarga class[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Child Class mewarisi fitur Parent Class[cite: 1].
* **Mengapa Penting:** Penghematan kode (code reusability) dan kemudahan perawatan[cite: 1].
* **Contoh Penggunaan:** `Programmer` mewarisi `nama` dan `makan()` dari `Karyawan`[cite: 1].
* **Hubungan Materi Berikutnya:** Method warisan dari Parent Class sering kali perlu disesuaikan ulang perilakunya di Child Class melalui Overriding[cite: 1].

## ⚠️ Kesalahan Umum Pemula
* Mengakses property `private` milik Parent langsung dari Child Class[cite: 1]. Untuk mengaksesnya, Anda harus menggunakan access modifier `protected` atau melalui Setter/Getter[cite: 1].