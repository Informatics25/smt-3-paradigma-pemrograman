# 00. Matriks Perbandingan Konsep Kunci (Anti-Bingung)

Tabel perbandingan di bawah ini disusun untuk membantu membedakan konsep-konsep dalam PBO C++ yang sering membingungkan pemula[cite: 1].

## A. Class vs Object
| Aspek | Class (Blueprint) | Object (Instance) |
|---|---|---|
| **Definisi** | Cetak biru / tipe data bentukan[cite: 1]. | Wujud fisik / variabel riil di memori[cite: 1]. |
| **Alokasi Memori** | Belum mengalokasikan memori untuk data[cite: 1]. | Mengalokasikan memori saat dibuat[cite: 1]. |
| **Analogi** | Denah rumah / resep makanan[cite: 1]. | Rumah fisik yang dibangun / kue nyata[cite: 1]. |
| **Sintaks C++** | `class Mahasiswa { ... };`[cite: 1] | `Mahasiswa mhs1;`[cite: 1] |

## B. Property vs Method
| Aspek | Property (Member Variable) | Method (Member Function) |
|---|---|---|
| **Fungsi Utama** | Menyimpan data / keadaan (state) objek[cite: 1]. | Mendefinisikan perilaku / aksi (behavior) objek[cite: 1]. |
| **Bentuk dalam C++** | Variabel biasa di dalam class[cite: 1]. | Fungsi/prosedur di dalam class[cite: 1]. |
| **Contoh** | `string nama; int umur;`[cite: 1] | `void tampilkanData() { ... }`[cite: 1] |

## C. Constructor vs Method Biasa
| Aspek | Constructor | Method Biasa |
|---|---|---|
| **Nama Method** | Wajib sama persis dengan nama Class[cite: 1]. | Bebas sesuai aturan penamaan variabel[cite: 1]. |
| **Return Type** | Tidak memiliki return type (bahkan void pun tidak)[cite: 1]. | Wajib memiliki return type (void, int, dsb)[cite: 1]. |
| **Cara Pemanggilan**| Dipanggil otomatis saat instansiasi objek[cite: 1]. | Dipanggil secara eksplisit (e.g. `obj.method()`)[cite: 1]. |

## D. Setter vs Getter
| Aspek | Method Setter (Mutator) | Method Getter (Accessor) |
|---|---|---|
| **Tujuan Utama** | Mengubah / memberi nilai pada property private[cite: 1]. | Membaca / mengambil nilai property private[cite: 1]. |
| **Parameter Input**| Memiliki parameter input nilai baru[cite: 1]. | Biasanya tidak memiliki parameter[cite: 1]. |
| **Return Value** | Biasanya void[cite: 1]. | Mengembalikan nilai sesuai tipe data property[cite: 1]. |

## E. Overriding vs Overloading
| Aspek | Overriding | Overloading |
|---|---|---|
| **Lokasi Class** | Antara Parent Class dan Child Class[cite: 1]. | Dalam Class yang sama[cite: 1]. |
| **Nama & Parameter**| Nama dan parameter fungsi HARUS SAMA[cite: 1]. | Nama SAMA, tapi parameter HARUS BERBEDA[cite: 1]. |
| **Tujuan** | Mengubah/mengganti perilaku fungsi induk[cite: 1]. | Menyediakan variasi cara pemanggilan fungsi[cite: 1]. |

## F. Access Modifiers: Public vs Private vs Protected
| Aspek | Public | Private | Protected |
|---|---|---|---|
| **Akses di Luar Class** | Bisa diakses langsung[cite: 1] | TIDAK BISA diakses[cite: 1] | TIDAK BISA diakses[cite: 1] |
| **Akses di Child Class**| Bisa diakses[cite: 1] | TIDAK BISA diakses[cite: 1] | Bisa diakses[cite: 1] |
| **Fungsi Utama** | Interface antarmuka luar[cite: 1] | Proteksi enkapsulasi utama[cite: 1] | Proteksi khusus untuk pewarisan[cite: 1] |

## G. Class Abstract vs Class Biasa
| Aspek | Class Abstract | Class Biasa (Concrete Class) |
|---|---|---|
| **Instansiasi** | TIDAK BISA dibuat objek langsung[cite: 1]. | BISA dibuat objek langsung[cite: 1]. |
| **Fungsi Khusus** | Memiliki minimal 1 Pure Virtual Function[cite: 1]. | Semua fungsi memiliki implementasi lengkap[cite: 1]. |
| **Peran Arsitektur**| Sebagai pola / standar bagi class turunan[cite: 1]. | Sebagai cetakan objek operasional[cite: 1]. |