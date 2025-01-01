#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << "박수\t";
        } else {
            cout << i << "\t";
        }
        if (i % 10 == 0) {  
            cout << endl;
        }
    }
    return 0;
}