#include <iostream>
#include <string>
using namespace std;

class Laptop {
public:
    string merk;
    int ramGB;

    // Constructor Berparameter[cite: 2]
    Laptop(string m, int r) {
        merk = m;
        ramGB = r;
        cout << "[CONSTRUCTOR] Laptop " << merk << " (" << ramGB << "GB RAM) berhasil dibuat." << endl;
    }

    void info() {
        cout << "Spesifikasi: " << merk << " - " << ramGB << "GB RAM" << endl;
    }

    // Destructor[cite: 2]
    ~Laptop() {
        cout << "[DESTRUCTOR] Objek laptop " << merk << " dihapus dari memori." << endl;
    }
};

int main() {
    cout << "=== AWAL MAIN ===" << endl;
    
    {
        // Objek diciptakan dalam scope lokal[cite: 2]
        Laptop lap1("ASUS ROG", 16);
        lap1.info();
    } // lap1 keluar dari scope di sini, destructor otomatis dipanggil[cite: 2]
    
    cout << "=== AKHIR MAIN ===" << endl;
    
    return 0;
}