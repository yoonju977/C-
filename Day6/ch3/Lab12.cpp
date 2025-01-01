#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int counter[256] = {0}; // ASCII 문자의 빈도수 저장

    cout << "문자를 입력하세요: ";
    getline(cin, input);

    // 빈도수 계산
    for (char c : input) {
        counter[(int)c]++;
    }

    
    for (int i = 0; i < 256; i++) {
        if (counter[i] > 0) {
            cout << (char)i << ": " << counter[i] << endl;
        }
    }

    return 0;
}