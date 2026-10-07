#include <iostream>
using namespace std;

// Base Class / Parent[cite: 1]
class Karyawan {
public:
    string nama;
    double gaji;
    
    void makan() {
        cout << nama << " sedang makan siang." << endl;
    }
};

// Derived Class / Child[cite: 1]
class Programmer : public Karyawan {
public:
    string bahasaPemrograman;
    
    void ngoding() {
        cout << nama << " sedang koding menggunakan " << bahasaPemrograman << endl;
    }
};

int main() {
    Programmer p;
    p.nama = "Eko"; // Mengetik property warisan Parent[cite: 1]
    p.bahasaPemrograman = "C++";
    
    p.makan();   // Method warisan Parent[cite: 1]
    p.ngoding(); // Method Child sendiri[cite: 1]
    
    return 0;
}