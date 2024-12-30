#include <iostream>
using namespace std;

class Phone { //클래스 명
//속성: 멤버 변수

public:
string maker;
string model;
string color;
int price;

//행위: 멤버 함수, method-클래스 안에 있는 함수
//동작 부분은 class 밖에다 선언, public안에 위치

void call();
void camera(); 
void intro();

};

//클래스외부정의
void Phone::call(){
    cout << "전화하기" << endl;
}

void Phone::camera(){
    cout <<"사진찍기"<<endl;
}

void Phone::intro(){
    cout<<"제조사"<<maker<<"모델"<<model<<"색상"<<color<<"가격"<<price<<endl;
}

int main(){


Phone phn;

phn.maker = "LG";
phn.model = "happy";
phn.color = "blk";
phn.price = 10000000;


phn.call();
phn.camera();
phn.intro();

}