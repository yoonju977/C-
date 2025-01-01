#include <iostream>
using namespace std;

void hello(int n = 1) {
    for (int i = 0; i < n; i++) {
        cout << "Hello ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "출력 횟수를 입력하세요 (없으면 기본값 1): ";
    cin >> n;
    hello(n);
    return 0;
}