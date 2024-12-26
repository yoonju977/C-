#include <iostream>
using namespace std;

int main() {
    char str1; 
    double num1, num2; 
    double result;

    cout << "연산의 종류(+,-,*,/): ";
    cin >> str1;

    cout << "숫자를 입력하세요 (예: 10 20): ";
    cin >> num1 >> num2;

  
    switch (str1) {
        case '+':
            result = num1 + num2;
            cout << "계산의 결과: " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "계산의 결과: " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "계산의 결과: " << result << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "오류: 0으로 나눌 수 없습니다" << endl;
            } else {
                result = num1 / num2;
                cout << "계산의 결과: " << result << endl;
            }
            break;

        default:
            cout << "잘못된 연산자입니다. +, -, *, / 중 하나를 입력하세요." << endl;
    }

    return 0;
}