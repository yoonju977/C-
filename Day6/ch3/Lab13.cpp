#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isSecure(const string& password) {
    bool has_upper = false, has_lower = false, has_digit = false;

    for (char c : password) {
        if (isupper(c)) has_upper = true;
        if (islower(c)) has_lower = true;
        if (isdigit(c)) has_digit = true;
    }

    return has_upper && has_lower && has_digit;
}

int main() {
    string password;
    cout << "비밀번호를 입력하세요: ";
    cin >> password;

    if (isSecure(password)) {
        cout << "안전한 비밀번호입니다." << endl;
    } else {
        cout << "비밀번호가 안전하지 않습니다." << endl;
    }

    return 0;
}