#include <iostream>
using namespace std;

int main() {
    double quiz_score, mid_score, final_score;
    double average_score;

    // 성적 입력
    cout << "퀴즈 점수를 입력하세요: ";
    cin >> quiz_score;

    cout << "중간고사 점수를 입력하세요: ";
    cin >> mid_score;

    cout << "기말고사 점수를 입력하세요: ";
    cin >> final_score;

    // 평균 계산
    average_score = (quiz_score + mid_score + final_score) / 3;

    // 결과 출력
    cout << "평균 점수는 " << average_score << " 입니다." << endl;

    return 0;
}