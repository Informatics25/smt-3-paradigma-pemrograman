#include <iostream>
#include <string>
using namespace std;

class Karakter {
public:
    string nama; // Dapat diakses langsung di luar class[cite: 2]

protected:
    int kesehatan; // Dapat diakses oleh class anak (Prajurit)[cite: 2]

private:
    string kodeRahasia; // Hanya di dalam class Karakter[cite: 2]

public:
    Karakter(string n, int hp, string kode) {
        nama = n;
        kesehatan = hp;
        kodeRahasia = kode;
    }
};

class Prajurit : public Karakter {
public:
    Prajurit(string n, int hp, string kode) : Karakter(n, hp, kode) {}

    void tampilStatus() {
        cout << "Nama Prajurit: " << nama << endl; // OK (public)[cite: 2]
        cout << "Kesehatan    : " << kesehatan << " HP" << endl; // OK (protected)[cite: 2]
        // cout << kodeRahasia; // ERROR! Tidak bisa diakses karena private di induk[cite: 2]
    }
};

int main() {
    Prajurit p1("Knight", 100, "X99");
    p1.tampilStatus();
    
    p1.nama = "Paladin"; // Boleh (public)[cite: 2]
    // p1.kesehatan = 150; // ERROR (protected tidak bisa diakses dari main)[cite: 2]
    
    return 0;
}