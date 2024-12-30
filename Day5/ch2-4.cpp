#include <iostream>
#include <string>
using namespace std;

class Phone {
    // 멤버 변수 (속성)
private:
    string maker;
    string model;
    string color;
    int price;

public:
    // 기본 생성자
    Phone() {
        maker = "Unknown";
        model = "Unknown";
        color = "Unknown";
        price = 0;
    }

    // 멤버 함수
    void call() {
        cout << "전화하기" << endl;
    }

    void camera() {
        cout << "사진찍기" << endl;
    }

    // Setter 함수
    void setMaker(string _maker) {
        if (_maker != "LG" && _maker != "Samsung" && _maker != "Apple") {
            cout << "지원하지 않는 제조사입니다." << endl;
            return;
        }
        maker = _maker;
    }

    void setModel(string _model) {
        model = _model;
    }

    void setColor(string _color) {
        color = _color;
    }

    void setPrice(int _price) {
        if (_price < 1000 || _price > 10000000) {
            cout << "지원하지 않는 가격 범위입니다." << endl;
            return;
        }
        price = _price;
    }

    void intro() {
        cout << "제조사: " << maker << endl;
        cout << "모델: " << model << endl;
        cout << "색상: " << color << endl;
        cout << "가격: " << price << "원" << endl;
    }
};

int main() {
   
    Phone phn1, phn2;

    
    phn1.setMaker("LG");
    phn1.setModel("Happy");
    phn1.setColor("Black");
    phn1.setPrice(5000000); 

    
    phn1.intro();

    // 잘못된 값 설정 시 테스트
    cout << "\n[잘못된 값 설정 테스트]" << endl;
    phn2.setMaker("UnknownBrand");
    phn2.setPrice(20000000); 
    phn2.intro();

    return 0;
}