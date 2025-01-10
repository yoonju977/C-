#include<iostream>
using namespace std;

class A {
public:
/*virtual*/ void iam() {
cout << "I am A" << endl;
}
};

class AA : public A {
public:
void iam() {
cout << "I am AA" << endl;
}
};

class AB : public A {
public:
void iam() {
cout << "I am AB" << endl;
}
};

int main() {

A* pa = new AA();

pa->iam();

pa = new AB();

pa->iam();

return 0;
}

