#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;
    while (true) {
        cout << "전화번호를 입력하세요 (quit 입력 시 종료): ";
        cin >> phone;
        if (phone == "quit") break;

        for (char c : phone) {
            if (c != '(' && c != ')') cout << c;
        }
        cout << endl;
    }
    return 0;
}