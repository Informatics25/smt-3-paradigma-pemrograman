#include <iostream>
using namespace std;

// --- DEMO OVERLOADING ---[cite: 2]
class Kalkulator {
public:
    int tambah(int a, int b) {
        return a + b;
    }
    double tambah(double a, double b) {
        return a + b;
    }
};

// --- DEMO OVERRIDING ---[cite: 2]
class Hewan {
public:
    virtual void suara() {
        cout << "Hewan bersuara..." << endl;
    }
};

class Kucing : public Hewan {
public:
    void suara() override {
        cout << "Kucing: Meong meong!" << endl;
    }
};

int main() {
    cout << "=== DEMO METHOD OVERLOADING ===" << endl;
    Kalkulator k;
    cout << "Tambah int   : 5 + 3 = " << k.tambah(5, 3) << endl;
    cout << "Tambah double: 2.5 + 4.3 = " << k.tambah(2.5, 4.3) << endl;
    
    cout << "\n=== DEMO METHOD OVERRIDING ===" << endl;
    Hewan h;
    Kucing c;
    
    h.suara(); // Memanggil versi induk[cite: 2]
    c.suara(); // Memanggil versi turunan (overridden)[cite: 2]
    
    return 0;
}