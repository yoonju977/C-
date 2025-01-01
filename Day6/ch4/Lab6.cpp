#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int salary;

public:
    void setEmployee(string _name, int _age, int _salary) {
        name = _name;
        age = _age;
        salary = _salary;
    }

    void printEmployee() {
        cout << "직원 정보:" << endl;
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        cout << "급여: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployee("김철수", 30, 2000000);
    emp.printEmployee();
    return 0;
}