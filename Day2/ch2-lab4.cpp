#include <iostream>
using namespace std;

int main() {
    int a, b, c; 
    int max;

    
    cout << "3개의 정수를 입력하세요: ";
    cin >> a >> b >> c;

    // 최대값 찾기
    max = a; 
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c; 
    }

    // 결과 출력
    cout << "가장 큰 정수는 " << max << " 입니다." << endl;

    return 0;
}