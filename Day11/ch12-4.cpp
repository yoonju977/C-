#include<iostream>
using namespace std;

class A {
public:
virtual void iam() {
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

void callClass(A* pa) {
pa->iam(); // I am A
}
void callClass(AA* pa) {
pa->iam(); // I am AA
}
void callClass(AB* pa) {
pa->iam(); // I am AB
}

int main() {

/*A* pa = new AA();

pa->iam();

pa = new AB();

pa->iam();
*/

callClass(new A());
callClass(new AA());
callClass(new AB());

return 0;
}

