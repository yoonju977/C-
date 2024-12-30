#include<iostream>

using namespace std;

class Phone { 

private:
string maker;
string model;
string color;
int price;

public:
void call();
void camera(); 
void intro();

void setmaker(string _maker) {
maker = _maker;
}
};

void Phone::call() {
cout << "전화하기" << endl;

}

void Phone::camera() {
cout << "사진찍기" << endl;
}

void Phone::intro() {
cout << "제조사" << maker << "모델" << model << "색상" << color << "가격" << price << endl;

}

int main() {

Phone phn;
//메소드를 통한 정보 접근 기존엔 직접 선언
phn.setmaker("LG");


phn.call();
phn.camera();
phn.intro();


}
