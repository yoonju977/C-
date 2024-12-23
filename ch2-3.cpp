#include <iostream>
using namespace std;

int main() {
    locale::global(locale("ko_KR.UTF-8"));
    
    string name; // 문자열을 저장할 변수

    // 문자얄 입력 받기
    cout << "이름을 입력하시오: ";
    cin >> name;

    // 입력 받은 문자열
    cout << name << "를/을 환영합니다."<<endl;
    return 0;
}