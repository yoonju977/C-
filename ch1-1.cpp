#include <iostream>
#include <climits>
using namespace std;

int main() {
    short s_v;            // short 타입 변수
    int var1;             // 숫자로 시작하는 변수 이름 수정
    long Lv;              // long 타입 변수
    long long ll_v;       // long long 타입 변수

    // 각 출력문을 올바르게 수정
    cout << "short max: " << SHRT_MAX << endl;
    cout << "short min: " << SHRT_MIN << endl;
    cout << "int max: " << INT_MAX << endl;
    cout << "int min: " << INT_MIN << endl;

    return 0;
}