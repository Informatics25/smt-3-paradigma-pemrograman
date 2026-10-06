#include <iostream>
using namespace std;

class Laptop {
public:
    string pemilik;

    // Constructor[cite: 1]
    Laptop(string name) {
        pemilik = name;
        cout << "Constructor: Laptop milik " << pemilik << " dinyalakan." << endl;
    }

    // Destructor[cite: 1]
    ~Laptop() {
        cout << "Destructor: Laptop milik " << pemilik << " dimatikan." << endl;
    }
};

int main() {
    Laptop lap1("Budi"); // Constructor berjalan otomatis[cite: 1]
    
    return 0; // Destructor berjalan otomatis saat keluar scope main[cite: 1]
}