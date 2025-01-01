#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string number;
    int balance;

public:
    void init(string _number, int _balance) {
        number = _number;
        balance = _balance;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "잔액이 부족합니다." << endl;
        } else {
            balance -= amount;
        }
    }

    void printAccount() {
        cout << "계좌 번호: " << number << endl;
        cout << "잔액: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.init("123-456-789", 1000000);
    acc.printAccount();

    acc.deposit(1000000);
    acc.printAccount();

    acc.withdraw(1000000);
    acc.printAccount();

    return 0;
}