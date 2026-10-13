#include <iostream>
using namespace std;

class Cetak {
public:
    // Overloading: nama sama, parameter beda[cite: 1]
    void print(int i) { cout << "Cetak Angka: " << i << endl; }
    void print(string s) { cout << "Cetak Teks: " << s << endl; }
};

class Hewan {
public:
    void bersuara() { cout << "Hewan bersuara..." << endl; }
};

class Kucing : public Hewan {
public:
    // Overriding: menimpa method induk[cite: 1]
    void bersuara() { cout << "Meow Meow!" << endl; }
};

int main() {
    Cetak c;
    c.print(100);       // Panggil Overloading int[cite: 1]
    c.print("Hello");   // Panggil Overloading string[cite: 1]
    
    Kucing k;
    k.bersuara();       // Panggil Overriding Kucing[cite: 1]
    
    return 0;
}