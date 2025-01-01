#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string word, shuffled_word;
    cout << "단어를 입력하세요: ";
    cin >> word;

    shuffled_word = word;
    srand(time(0));

    // 단어 섞기
    for (int i = 0; i < shuffled_word.size(); i++) {
        int pos1 = rand() % shuffled_word.size();
        int pos2 = rand() % shuffled_word.size();
        swap(shuffled_word[pos1], shuffled_word[pos2]);
    }

    cout << "애너그램 단어: " << shuffled_word << endl;

    string guess;
    cout << "원래 단어를 추측해 보세요: ";
    cin >> guess;

    if (guess == word) {
        cout << "정답입니다!" << endl;
    } else {
        cout << "틀렸습니다. 정답은 " << word << "입니다." << endl;
    }

    return 0;
}