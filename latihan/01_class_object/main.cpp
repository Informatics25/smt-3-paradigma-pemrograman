#include <iostream>
#include <string>
using namespace std;

// Definisi Class (Blueprint)[cite: 2]
class Mobil {
public:
    string merk; 
    int tahun; 
};

int main() {
    // Instansiasi Objek Pertama[cite: 2]
    Mobil mobil1; 
    mobil1.merk = "Toyota Avanza"; 
    mobil1.tahun = 2020; 
    
    // Instansiasi Objek Kedua[cite: 2]
    Mobil mobil2; 
    mobil2.merk = "Honda Civic"; 
    mobil2.tahun = 2022; 
    
    // Menampilkan Informasi Objek[cite: 2]
    cout << "=== INFORMASI MOBIL ===" << endl; 
    cout << "Mobil 1: " << mobil1.merk << " (" << mobil1.tahun << ")" << endl; 
    cout << "Mobil 2: " << mobil2.merk << " (" << mobil2.tahun << ")" << endl; 
    
    return 0;
}