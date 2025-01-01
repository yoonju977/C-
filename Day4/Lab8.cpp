#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int frequency[10] = {0};

    for (int i = 0; i < 100; i++) {
        int random = rand() % 10;
        frequency[random]++;
    }

    int max_count = 0, most_frequent = 0;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            most_frequent = i;
        }
    }

    cout << "가장 많이 생성된 난수는 " << most_frequent << " (횟수: " << max_count << ") 입니다." << endl;
    return 0;
}