#include <iostream>
#include <time.h> 
using namespace std;

int main() {
    int user_choice, computer_choice;

    // 랜덤 시드 초기화 (현재 시간을 기준으로 설정)
    srand(time(NULL));

    // 컴퓨터의 랜덤 선택 (1: 가위, 2: 바위, 3: 보) 난수 생성 로직 사용
    computer_choice = rand() % 3 + 1;

    // 사용자 입력
    cout << "가위,바위,보 중 하나를 선택하세요(1,2,3): ";
    cin >> user_choice;

    cout << "컴퓨터: " << computer_choice << endl;

    // 승패 결정
    if (user_choice == computer_choice) {
        cout << "비겼다!" << endl;
    } 
    else if ((user_choice == 1 && computer_choice == 3) || 
             (user_choice == 2 && computer_choice == 1) || 
             (user_choice == 3 && computer_choice == 2)) {
        cout << "사용자 승!" << endl;
    } 
    else {
        cout << "컴퓨터 승!" << endl;
    }

    return 0;
}