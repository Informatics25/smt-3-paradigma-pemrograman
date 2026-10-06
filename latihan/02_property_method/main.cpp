#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
    string nama; 
    string nim; 
    double nilaiUTS; 
    double nilaiUAS; 

    // Method untuk menghitung nilai akhir[cite: 2]
    double hitungNilaiAkhir() { 
        return (nilaiUTS * 0.4) + (nilaiUAS * 0.6); 
    }

    // Method untuk menampilkan informasi mahasiswa[cite: 2]
    void tampilData() { 
        cout << "NIM         : " << nim << endl; 
        cout << "Nama        : " << nama << endl; 
        cout << "Nilai UTS   : " << nilaiUTS << endl; 
        cout << "Nilai UAS   : " << nilaiUAS << endl; 
        cout << "Nilai Akhir : " << hitungNilaiAkhir() << endl; 
        cout << "-----------------------------------" << endl; 
    }
};

int main() {
    Mahasiswa mhs; 
    mhs.nim = "230101001"; 
    mhs.nama = "Budi Santoso"; 
    mhs.nilaiUTS = 80.0; 
    mhs.nilaiUAS = 90.0; 
    
    mhs.tampilData(); 
    
    return 0;
}

