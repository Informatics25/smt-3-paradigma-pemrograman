#include <iostream>
using namespace std;

class AkunBank {
private:
    double saldo; // Diprotesi agar tidak bisa diubah langsung dari luar[cite: 2]

public:
    // Constructor[cite: 2]
    AkunBank(double saldoAwal) {
        setSaldo(saldoAwal);
    }

    // Setter dengan Validasi[cite: 2]
    void setSaldo(double s) {
        if (s >= 0) {
            saldo = s;
        } else {
            cout << "ERR: Saldo tidak boleh negatif! Diatur ke 0." << endl;
            saldo = 0;
        }
    }

    // Getter[cite: 2]
    double getSaldo() {
        return saldo;
    }

    void setor(double jumlah) {
        if (jumlah > 0) {
            saldo += jumlah;
            cout << "Setor berhasil: Rp " << jumlah << endl;
        }
    }

    void tarik(double jumlah) {
        if (jumlah > 0 && jumlah <= saldo) {
            saldo -= jumlah;
            cout << "Tarik berhasil: Rp " << jumlah << endl;
        } else {
            cout << "ERR: Penarikan gagal. Saldo tidak mencukupi." << endl;
        }
    }
};

int main() {
    AkunBank akun(500000);
    
    cout << "Saldo Awal: Rp " << akun.getSaldo() << endl;
    
    akun.setor(200000);
    cout << "Saldo Sekarang: Rp " << akun.getSaldo() << endl;
    
    akun.tarik(800000); // Harus gagal karena melebihi saldo[cite: 2]
    
    cout << "Saldo Akhir: Rp " << akun.getSaldo() << endl;
    
    return 0;
}