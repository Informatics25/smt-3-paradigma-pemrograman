#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // HANYA di class ini[cite: 1]

protected:
    string accountType; // Di class ini & Child Class[cite: 1]

public:
    string ownerName; // Bebas diakses luar[cite: 1]

    BankAccount(string name, double b) {
        ownerName = name;
        balance = b;
        accountType = "Tabungan";
    }

    double getBalance() { return balance; }
};

int main() {
    BankAccount acc("Budi", 500000);
    cout << acc.ownerName; // VALID (Public)[cite: 1]
    
    // cout << acc.balance; // ERROR COMPILER! (Private)[cite: 1]
    
    return 0;
}