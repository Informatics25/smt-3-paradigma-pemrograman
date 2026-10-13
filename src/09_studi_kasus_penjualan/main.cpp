#include <iostream>
using namespace std;

class Produk {
private:
    string nama;
    double harga;
    int stok;

public:
    // Constructor[cite: 1]
    Produk(string n, double h, int s) {
        nama = n;
        harga = h;
        stok = s;
    }

    // Method Transaksi[cite: 1]
    void beli(int jumlah) {
        if (jumlah <= stok) {
            stok -= jumlah;
            double total = jumlah * harga;

            cout << "Berhasil membeli " << jumlah << " " << nama << endl;
            cout << "Total Bayar: Rp" << total << endl;
            cout << "Sisa Stok: " << stok << endl;
        } else {
            cout << "Stok " << nama << " tidak mencukupi!" << endl;
        }
    }
};

int main() {
    Produk p1("Buku Tulis", 5000, 10);
    p1.beli(3);

    return 0;
}