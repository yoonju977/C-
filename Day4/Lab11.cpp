#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    cout << "문자를 입력하세요: ";
    getline(cin, sentence);

    // 첫 번째 문자가 소문자일 경우 대문자로 변경
    if (islower(sentence[0])) {
        sentence[0] = toupper(sentence[0]);
    }

    // 마침표가 없으면 추가
    if (sentence[sentence.size() - 1] != '.') {
        sentence += '.';
    }

    cout << "결과 문자열: " << sentence << endl;
    return 0;
}