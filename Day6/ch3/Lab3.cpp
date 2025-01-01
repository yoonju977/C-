#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double a, b;
    cout << "직각삼각형의 두 변의 길이를 입력하세요: ";
    cin >> a >> b;
    cout << "빗변의 길이는 " << hypotenuse(a, b) << "입니다." << endl;
    return 0;
}