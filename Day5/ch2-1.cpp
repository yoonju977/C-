#include <iostream>
using namespace std;

class Circle{
public:
    int r;
    string color;
    double calcArea(){
        return 3.14*r*r;
    }


};

int main(){
    Circle obi1,obi2;

    obi1.r = 100;
    obi1.color = "red";
    obi2.r = 150;
    obi2.color = "blue";

    cout << "원의 면적:" << obi1.calcArea() << endl;
    cout << "원의 면적:" << obi2.calcArea() << endl;
    return 0;
}