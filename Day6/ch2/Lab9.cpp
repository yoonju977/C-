#include <iostream>
using namespace std;

int main() {
    cout << "화씨\t섭씨" << endl;
    for (int f = 0; f <= 100; f += 10) {
        double c = (f - 32.0) * 5.0 / 9.0;
        cout << f << "\t" << c << endl;
    }
    return 0;
}