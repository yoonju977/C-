#include <iostream>
using namespace std;

int main() {
    const int price_burger = 6800;
    const int price_cola = 1000;
    const int price_fry = 1500;

    int num_burger, num_cola, num_fry;
    cout << "햄버거를 몇 개 주문하시겠습니까? ";
    cin >> num_burger;

    cout << "콜라를 몇 개 주문하시겠습니까? ";
    cin >> num_cola;

    cout << "프렌치프라이를 몇 개 주문하시겠습니까? ";
    cin >> num_fry;
    
    //총 가격 계산
    int total_price = (num_burger * price_burger) + (num_cola * price_cola) + (num_fry * price_fry);
    
    //주문확인
    cout << "주문품은 햄버거 " << num_burger << "개, 콜라 " << num_cola 
         << "개, 프렌치프라이 " << num_fry << "개 입니다." << endl;
    cout << "총 가격은 " << total_price << "원 입니다." << endl;

    int paid_amount;
    cout << "받은 금액을 입력하세요: ";
    cin >> paid_amount;

    //거스름돈 계산
    int change = paid_amount - total_price;

    cout << paid_amount << "원 받았습니다. ";

    //거스름돈 출력 및 예외처리(돈이 부족할때)
    if (change < 0) {
        cout << "금액이 부족합니다. " << -change << "원이 더 필요합니다." << endl;
    } else {
        cout << "거스름돈은 " << change << "원 입니다." << endl;
    }

    return 0;
}