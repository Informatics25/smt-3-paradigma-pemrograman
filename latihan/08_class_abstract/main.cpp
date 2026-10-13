#include <iostream>
using namespace std;

// Abstract Class[cite: 2]
class MetodePembayaran {
public:
    // Pure Virtual Function[cite: 2]
    virtual void prosesBayar(double jumlah) = 0;
    virtual ~MetodePembayaran() {}
};

// Class Konkret 1[cite: 2]
class TransferBank : public MetodePembayaran {
public:
    void prosesBayar(double jumlah) override {
        cout << "[TRANSFER BANK] Memproses pembayaran sejumlah Rp " << jumlah << endl;
    }
};

// Class Konkret 2[cite: 2]
class EWallet : public MetodePembayaran {
public:
    void prosesBayar(double jumlah) override {
        cout << "[E-WALLET] Memproses pembayaran via QRIS/E-Wallet sejumlah Rp " << jumlah << endl;
    }
};

int main() {
    // MetodePembayaran m; // ERROR! Abstract Class tidak bisa diinstansiasi langsung[cite: 2]
    MetodePembayaran* p1 = new TransferBank();
    MetodePembayaran* p2 = new EWallet();
    
    p1->prosesBayar(150000);
    p2->prosesBayar(75000);
    
    delete p1;
    delete p2;
    
    return 0;
}