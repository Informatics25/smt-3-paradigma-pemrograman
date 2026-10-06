# 03. Constructor dan Destructor pada C++

Materi ini membahas tentang Manajemen Lifecycle Objek, bersumber dari Video #3 dengan durasi 24:32.

## Pemahaman Dasar
* **Apa itu?** Constructor adalah method khusus yang otomatis berjalan saat Object dibuat[cite: 1]. Destructor adalah method khusus (diawali tanda `~`) yang otomatis berjalan saat Object dihancurkan atau keluar scope[cite: 1].
* **Mengapa digunakan?** Constructor memastikan property langsung memiliki nilai valid saat lahir[cite: 1]. Destructor memastikan memori atau resource dibersihkan[cite: 1].
* **Masalah apa yang diselesaikan?** Hal ini mencegah error akibat property berisi nilai acak (garbage value) saat diproses[cite: 1].
* **Bagaimana cara kerjanya?** C++ memanggil Constructor tepat setelah memori objek di-alokasikan, dan memanggil Destructor sebelum memori dilepas[cite: 1].
* **Kapan digunakan?** Constructor dipakai untuk inisialisasi awal, sedangkan Destructor dipakai untuk de-alokasi memori dinamis[cite: 1].

## Konsep Inti & Ringkasan Cepat
* **Inti Konsep:** Constructor dipanggil saat pembuatan objek, Destructor dipanggil saat penghancuran[cite: 1].
* **Mengapa Penting:** Menjamin nilai awal terdefinisi dan menghindari kebocoran memori (memory leak)[cite: 1].
* **Hubungan Materi Berikutnya:** Nilai property yang diinisialisasi oleh Constructor memerlukan kontrol akses menggunakan Setter & Getter[cite: 1].

## ⚠️ Kesalahan Umum Pemula
* **Memberi Return Type:** Kesalahan yang sering terjadi adalah memberikan return type (seperti `void`) pada Constructor atau Destructor[cite: 1]. Hal ini merupakan pelanggaran sintaks C++, karena Constructor dan Destructor tidak memiliki return type sama sekali[cite: 1].