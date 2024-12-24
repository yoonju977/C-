#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double radius, surface_area, volume;

    // 반지름 입력
    cout << "구의 반지름을 입력하세요: ";
    cin >> radius;

    // 표면적 계산(제곱함수인 pow를 쓰지 않을때 코드 : 4 * M_PI * radius * radius; )
    surface_area = 4 * M_PI * pow(radius, 2);

    // 체적 계산(제곱함수인 pow를 쓰지 않을때 코드 : (4.0 / 3) * M_PI * radius * radius * radius;)
    volume = (4.0 / 3) * M_PI * pow(radius, 3);

    // 결과 출력
    cout << "구의 표면적: " << surface_area << endl;
    cout << "구의 체적: " << volume << endl;

    return 0;
}