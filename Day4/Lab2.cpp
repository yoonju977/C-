#include <iostream>
#include <cmath>
using namespace std;

inline double calc_v(double radius = 1.0) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    double radius;
    cout << "반지름을 입력하세요: ";
    cin >> radius;
    cout << "구의 부피는 " << calc_v(radius) << "입니다." << endl;
    return 0;
}