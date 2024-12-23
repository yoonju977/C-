#include <iostream>
using namespace std;

int main() {
    int age;          // 나이
    int price = 1000; // 기본 가격

    cout << "나이를 입력하세요: ";
    cin >> age;

    if (age > 19) { // 성인 조건
        price += 500;
        cout << "성인입니다." << endl;
    } 
    else if (age > 14 && age <= 19) { // 청소년 조건
        price += 300;
        cout << "청소년입니다." << endl;
    } 
    else { // 어린이 조건
        cout << "어린이입니다." << endl;
    }

    // 최종 가격
    cout << "가격은 " << price << "원입니다." << endl;

    return 0;
}