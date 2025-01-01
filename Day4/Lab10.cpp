#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int heads = 0, tails = 0;

    for (int i = 0; i < 100; i++) {
        if (rand() % 2 == 0) heads++;
        else tails++;
    }

    cout << "앞면: " << heads << "번, 뒷면: " << tails << "번" << endl;
    return 0;
}