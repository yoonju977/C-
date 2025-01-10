#include <iostream>

using namespace std;

class Box {
private:
    int length, width, height;

public:

    Box() : length(0), width(0), height(0) {}


    Box(int l, int w, int h) : length(l), width(w), height(h) {}


    int getVolume() const {
        return length * width * height;
    }

    // `+` 연산자
    Box operator+(const Box& other) const {
        return Box(length + other.length, width + other.width, height + other.height);
    }

    
    void print(int index) const {
        cout << "상자 #" << index << endl;
        cout << "상자의 길이 : " << length << endl;
        cout << "상자의 너비 : " << width << endl;
        cout << "상자의 높이 : " << height << endl;
        cout << "상자의 부피 : " << getVolume() << endl;
    }
};

int main() {
    // Box 객체 생성
    Box a(10, 10, 10);
    Box b(20, 20, 20);
    Box c;


    c = a + b;

    // 출력
    a.print(1);
    b.print(2);
    c.print(3);

    return 0;
}