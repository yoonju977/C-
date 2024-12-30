#include <iostream>
#include <string>
using namespace std;

class Book{

private:
    string title;
    string author;

public:
    void setTitle(string _title){
        title = _title;
    }

    void setAuthor(string _author){
        author = _author;
    }

    void print(){
        cout<<"책 이름 :"<< title << endl << "책 저자 :" << author << endl; 
    }

};

int main(){

    Book obj;

    obj.setTitle("Great C++");
    obj.setAuthor("Bob");

    obj.print();
    return 0;
}