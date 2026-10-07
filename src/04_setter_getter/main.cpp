#include <iostream>
using namespace std;

class AkunBank {
private:
    double saldo; // Property private[cite: 1]

public:
    // Setter dengan Validasi[cite: 1]
    void setSaldo(double s) {
        if (s >= 0) {
            saldo = s;
        } else {
            cout << "Error: Saldo tidak boleh negatif!" << endl;
        }
    }

    // Getter[cite: 1]
    double getSaldo() {
        return saldo;
    }
};

int main() {
    AkunBank akun;
    akun.setSaldo(1500000);
    
    cout << "Saldo saat ini: Rp" << akun.getSaldo() << endl;
    
    return 0;
}