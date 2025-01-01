#include<iostream>
#include<string>

using namespace std;

int main() {

string a = "hello";
string b("hello");
string c = { "hello" };

//cout << a << endl;
//cout << b << endl;
//cout << c << endl;

if (a == b && b == c) {
cout << "모두 같은 문자열" << endl;
}
else {
cout << "다은 문자열" << endl;
}
}
