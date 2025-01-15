#include <iostream>

using namespace std;

class Time {
private:
    int hour, min, sec;

public:
    
    Time() : hour(0), min(0), sec(0) {}

    
    Time(int h, int m, int s) : hour(h), min(m), sec(s) {}

    // 시간 출력 함수
    void print() const {
        cout << "Time 객체: " << hour << ":" << min << ":" << sec << endl;
    }

    
    int getHour() const { return hour; }
    int getMin() const { return min; }
    int getSec() const { return sec; }
};

//객체 참조 방식
bool isEqual(const Time& t1, const Time& t2) {
    return (t1.getHour() == t2.getHour()) &&
           (t1.getMin() == t2.getMin()) &&
           (t1.getSec() == t2.getSec());
}

//포인터 방식
bool isEqual(const Time* pt1, const Time* pt2) {
    return (pt1->getHour() == pt2->getHour()) &&
           (pt1->getMin() == pt2->getMin()) &&
           (pt1->getSec() == pt2->getSec());
}

int main() {
    
    Time t1(12, 11, 33);
    Time t2(12, 11, 33);
    Time t3(10, 22, 55); 

    // 동적 할당
    Time* pt1 = new Time(12, 11, 33);
    Time* pt2 = new Time(12, 11, 33);
    Time* pt3 = new Time(10, 22, 55);

    // 객체 출력
    cout << "\n=== 생성된 Time 객체 ===" << endl;
    t1.print();
    t2.print();
    t3.print();

    cout << "\n=== 비교 결과 ===" << endl;
    
    // 객체 참조 방식 비교
    if (isEqual(t1, t2)) {
        cout << "객체 참조 방식: t1과 t2는 같은 시간입니다." << endl;
    } else {
        cout << "객체 참조 방식: t1과 t2는 다른 시간입니다." << endl;
    }

    if (isEqual(t1, t3)) {
        cout << "객체 참조 방식: t1과 t3는 같은 시간입니다." << endl;
    } else {
        cout << "객체 참조 방식: t1과 t3는 다른 시간입니다." << endl;
    }

    // 포인터 방식 비교
    if (isEqual(pt1, pt2)) {
        cout << "포인터 방식: pt1과 pt2는 같은 시간입니다." << endl;
    } else {
        cout << "포인터 방식: pt1과 pt2는 다른 시간입니다." << endl;
    }

    if (isEqual(pt1, pt3)) {
        cout << "포인터 방식: pt1과 pt3는 같은 시간입니다." << endl;
    } else {
        cout << "포인터 방식: pt1과 pt3는 다른 시간입니다." << endl;
    }

    // 동적 메모리 해제
    delete pt1;
    delete pt2;
    delete pt3;

    return 0;
}