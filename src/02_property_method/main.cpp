#include <iostream>
using namespace std;

class Mobil {
public:
    // Property[cite: 1]
    string merk;
    int kecepatan;

    // Method[cite: 1]
    void tancapGas() {
        kecepatan += 10;
        cout << merk << " melaju dengan kecepatan " << kecepatan << " km/jam" << endl;
    }
};

int main() {
    Mobil mobilku;
    mobilku.merk = "Toyota";
    mobilku.kecepatan = 50;

    mobilku.tancapGas(); // Memanggil Method[cite: 1]

    return 0;
}