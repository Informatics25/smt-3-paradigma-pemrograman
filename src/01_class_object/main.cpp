#include <iostream>
using namespace std;

// Definisi Class
class Mahasiswa {
public:
    string nama;
    string nim;
};

int main() {
    // Instansiasi Object
    Mahasiswa mhs1;
    mhs1.nama = "Andi";
    mhs1.nim = "2023001";

    cout << "Nama: " << mhs1.nama << ", NIM: " << mhs1.nim << endl;

    return 0;
}

