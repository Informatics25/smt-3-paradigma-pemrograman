#include <iostream>
#include <string>
using namespace std;

// Base Class (Induk)[cite: 2]
class Karyawan {
public:
    string nama;
    double gajiPokok;
    
    void tampilDasar() {
        cout << "Nama Karyawan: " << nama << endl;
        cout << "Gaji Pokok   : Rp " << gajiPokok << endl;
    }
};

// Derived Class (Anak)[cite: 2]
class Manager : public Karyawan {
public:
    double tunjangan;
    
    void tampilManager() {
        tampilDasar(); // Memanggil method milik class induk[cite: 2]
        cout << "Tunjangan    : Rp " << tunjangan << endl;
        cout << "Total Gaji   : Rp " << (gajiPokok + tunjangan) << endl;
    }
};

int main() {
    Manager mgr;
    mgr.nama = "Siti Aminah";
    mgr.gajiPokok = 7000000;
    mgr.tunjangan = 3000000;
    
    cout << "=== DATA MANAGER ===" << endl;
    mgr.tampilManager();
    
    return 0;
}