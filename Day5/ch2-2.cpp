#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        int speed;
        int gear;
        string color;

        void speed_up(){
           speed += 100;
        }

        void speed_down(){
            speed -= 50;
        }

};

int main(){
    Car car1;

    car1.speed = 150;
    car1.color = "black";
    car1.gear = 3;

    car1.speed_up();
    cout << "차의 속도 :" << car1.speed << endl;
    car1.speed_down();
    cout << "차의 속도 :" << car1.speed << endl;

    return 0;
}

