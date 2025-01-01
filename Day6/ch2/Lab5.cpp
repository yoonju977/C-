#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;

    do {
        cout << "정수를 입력하세요: ";
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "합계 = " << sum << endl;
    return 0;
}