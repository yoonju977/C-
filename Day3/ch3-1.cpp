#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, addr;

	cout << "이름을 입력하시오 : ";
	cin >> s1;
	cin.ignore();	// 엔터키를 없애기 위하여 필요하다. 

	cout << "주소를 입력하시오 : ";
	getline(cin, addr);
	cout << addr << "의 " << s1 << "씨 안녕하세요? " << endl;
	return 0;
}
