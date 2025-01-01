#include <iostream>
using namespace std;

int maxi(int x, int y, int z) {
    if (x >= y && x >= z) return x;
    else if (y >= x && y >= z) return y;
    else return z;
}

int main() {
    int a, b, c;
    cout << "세 개의 정수를 입력하세요: ";
    cin >> a >> b >> c;
    cout << "가장 큰 정수는 " << max(a, b, c) << "입니다." << endl;
    return 0;
}