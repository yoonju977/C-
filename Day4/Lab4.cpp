#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "2부터 100까지의 소수: ";
    for (int i = 2; i <= 100; i++) {
        if (is_prime(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}