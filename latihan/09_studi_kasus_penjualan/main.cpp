#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class Produk[cite: 2]
class Produk {
private:
    string namaProduk;
    double harga;

public:
    Produk(string nama, double hg) {
        namaProduk = nama;
        harga = hg;
    }
    
    string getNama() { return namaProduk; }
    double getHarga() { return harga; }
};

// Item Belanja[cite: 2]
struct ItemTransaksi {
    Produk produk;
    int jumlah;
};

// Class Transaksi[cite: 2]
class TransaksiPenjualan {
private:
    vector<ItemTransaksi> daftarBelanja;

public:
    void tambahItem(Produk p, int qty) {
        ItemTransaksi item = {p, qty};
        daftarBelanja.push_back(item);
    }
    
    double hitungTotal() {
        double total = 0;
        for (auto& item : daftarBelanja) {
            total += item.produk.getHarga() * item.jumlah;
        }
        return total;
    }
    
    void cetakStruk() {
        cout << "\n======================================" << endl;
        cout << "        STRUK PENJUALAN TOKO          " << endl;
        cout << "======================================" << endl;
        
        for (auto& item : daftarBelanja) {
            double subtotal = item.produk.getHarga() * item.jumlah;
            cout << item.produk.getNama() << " x" << item.jumlah 
                 << " @ Rp " << item.produk.getHarga() 
                 << " = Rp " << subtotal << endl;
        }
        
        cout << "--------------------------------------" << endl;
        cout << "TOTAL BAYAR : Rp " << hitungTotal() << endl;
        cout << "======================================" << endl;
    }
};

int main() {
    // Katalog Produk[cite: 2]
    Produk p1("Buku Tulis C++", 15000);
    Produk p2("Pensil 2B", 3500);
    Produk p3("Penggaris 30cm", 5000);
    
    // Transaksi Kasir[cite: 2]
    TransaksiPenjualan kasir;
    kasir.tambahItem(p1, 2);
    kasir.tambahItem(p2, 5);
    kasir.tambahItem(p3, 1);
    
    // Cetak Struk[cite: 2]
    kasir.cetakStruk();
    
    return 0;
}