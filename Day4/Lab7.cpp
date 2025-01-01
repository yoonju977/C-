#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[5], longest;
    cout << "문자열 5개를 입력하세요:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> words[i];
        if (words[i].size() > longest.size()) longest = words[i];
    }

    cout << "가장 긴 문자열은: " << longest << endl;
    return 0;
}