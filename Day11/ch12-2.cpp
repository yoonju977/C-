#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Animal speak()" << endl; } // 가상 함수
    virtual ~Animal() {} // 가상 소멸자 (메모리 누수 방지)
};

class Dog : public Animal {
public:
    void speak() override { cout << "멍멍" << endl; } // 오버라이딩
};

class Cat : public Animal {
public:
    void speak() override { cout << "야옹" << endl; } // 오버라이딩
};

// 부모 포인터를 사용하여 다형성을 적용하는 함수
void callClass(Animal* pa) {
    pa->speak(); // 동적 바인딩을 통한 올바른 함수 호출
}

int main() {
    Animal* a = new Animal();  // 부모 객체
    Animal* d = new Dog();     // 부모 포인터로 Dog 객체 참조
    Animal* c = new Cat();     // 부모 포인터로 Cat 객체 참조

    cout << "Animal 객체: ";
    callClass(a);

    cout << "Dog 객체: ";
    callClass(d);

    cout << "Cat 객체: ";
    callClass(c);

    // 동적 할당된 메모리 해제
    delete a;
    delete d;
    delete c;

    return 0;
}