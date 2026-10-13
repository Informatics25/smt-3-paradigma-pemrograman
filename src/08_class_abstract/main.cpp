#include <iostream>
using namespace std;

// Abstract Class[cite: 1]
class BangunDatar {
public:
    // Pure Virtual Function[cite: 1]
    virtual double hitungLuas() = 0;
};

class Persegi : public BangunDatar {
private:
    double sisi;

public:
    Persegi(double s) : sisi(s) {}

    // Wajib Override[cite: 1]
    double hitungLuas() override {
        return sisi * sisi;
    }
};

int main() {
    // BangunDatar bd; // ERROR! Abstract Class tidak bisa diinstansiasi[cite: 1]
    Persegi p(4);
    
    cout << "Luas Persegi: " << p.hitungLuas() << endl;
    
    return 0;
}