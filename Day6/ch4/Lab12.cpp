#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void print() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t;

    
    t.setTime(7, 10, 20);

    
    t.print();

    return 0;
}