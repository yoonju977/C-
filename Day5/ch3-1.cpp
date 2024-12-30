#include <iostream>
using namespace std;

class Time{
    public :
    int hour;
    int minute;

    // Time(){
    //     hour = 0;
    //     minute = 0;
    // }

    Time(int h= 0, int m=0){
        hour = h;
        minute = m;
    }
    //Time(int h=0, int m=0) : hour{h}, minute{m} {}


    void print(){
        cout << hour << ":" << minute << endl;
    }
};

int main(){
    Time b(10,25);
    Time c(10, 25 );
    Time d = { 10, 25};
    Time e;
    Time f(10, 25);

    b.print();
    c.print();
    d.print();
    e.print();
    f.print();

    return 0;
}