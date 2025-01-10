#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual double getArea() const = 0; 
    virtual ~Shape() {} 
};

// 사각형 
class Rect : public Shape {
private:
    double width, height;
public:
    Rect(double w, double h) : width(w), height(h) {}
    double getArea() const override {
        return width * height;
    }
};

// 원
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const override {
        return M_PI * radius * radius; 
    }
};

// 삼각형
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() const override {
        return (base * height) / 2;
    }
};

int main() {
    
    Shape* shapes[3];
    shapes[0] = new Rect(50, 60);     
    shapes[1] = new Circle(21.75);    
    shapes[2] = new Triangle(60, 59); 

    
    for (int i = 0; i < 3; i++) {
        cout << "도형 #" << i << "의 면적: " << shapes[i]->getArea() << endl;
    }

    
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}