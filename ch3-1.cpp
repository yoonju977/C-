#include <iostream> // 입출력 기능 포함
using namespace std;

int main() {
    int x, y; // 두 정수를 저장할 변수

    // x값 입력
    cout << "x값을 입력하세요: ";
    cin >> x;

    // y값 입력
    cout << "y값을 입력하세요: ";
    cin >> y;

    // x와 y를 비교하여 결과 출력
    if (x > y) {
        cout << "x가 y보다 큽니다." << endl;
    } else {
        cout << "y가 x보다 큽니다." << endl;
    }

    return 0; 
}