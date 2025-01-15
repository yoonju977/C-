#include <iostream>
#include <string>

using namespace std;


class Employee {
protected:
    string name;
    int salary;
    int id; 
    static int employeeCount;  
    static int nextID;  

public:
    // 기본 생성자
    Employee() : name(""), salary(0), id(nextID++) {
        employeeCount++;  
    }

    // 매개변수를 받는 생성자
    Employee(string _name, int _salary) : name(_name), salary(_salary), id(nextID++) {
        employeeCount++;
    }

    // 소멸자
    virtual ~Employee() {
        employeeCount--;  
    }

    // 가상 함수: 월급 계산
    virtual int computeSalary() {
        return salary;
    }

    // 직원 정보 출력
    virtual void print() {
        cout << "ID: " << id << "\n이름: " << name << "\n월급: " << salary << endl;
    }

    // 직원 수 반환
    static int getEmployeeCount() {
        return employeeCount;
    }
};

// static 멤버 변수 초기화
int Employee::employeeCount = 0;
int Employee::nextID = 1;


class Department {
protected:
    string departmentName;

public:
    Department(string _dept) : departmentName(_dept) {}

    void showDepartment() {
        cout << "부서: " << departmentName << endl;
    }
};


class Manager : public Employee, public Department {
private:
    int bonus;

public:
    // Manager 생성자
    Manager(string _name, int _salary, int _bonus, string _dept)
        : Employee(_name, _salary), Department(_dept), bonus(_bonus) {}

    // 월급 계산 함수 오버라이딩 (기본 월급 + 보너스)
    int computeSalary() override {
        return salary + bonus;
    }

    
    void print() override {
        cout << "ID: " << id << "\n이름: " << name << "\n월급: " << salary << "\n보너스: " << bonus << endl;
        cout << "전체 급여: " << computeSalary() << endl;
        showDepartment();  
    }
};

int main() {
    // Employee 객체 생성
    Employee e1("홍길동", 200);
    Employee e2("김철수", 250);

    // Manager 객체 생성 (다중 상속 적용)
    Manager m1("이영희", 300, 100, "HR");
    Manager m2("박민수", 400, 150, "Finance");

    
    cout << "\n=== 직원 정보 ===" << endl;
    e1.print();
    cout << endl;
    e2.print();
    cout << endl;

    
    cout << "\n=== 관리자 정보 ===" << endl;
    m1.print();
    cout << endl;
    m2.print();
    cout << endl;

    
    cout << "\n총 직원 수: " << Employee::getEmployeeCount() << "명" << endl;

    return 0;
}