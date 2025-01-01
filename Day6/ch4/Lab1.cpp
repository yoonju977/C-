#include <iostream>
#include <string>
using namespace std;

class Person{
private:
        string name;
        int age;

public:

    void setPerson(string _name){
        name = _name;
    }

    void setAge(int _age){
        age = _age;
    }

    void print(){
        cout << "이름 :" << name <<endl << "나이 :" << age << endl;
    }
};

int main(){
    Person obj;

    obj.setPerson("김철수");
    obj.setAge(21);

    obj.print();
    return 0;

}