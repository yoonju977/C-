#include <iostream>
#include <string>

using namespace std;

int main()
{
string str;

cout << "문자열을 입력하세요." << endl;

getline(cin, str);

//cin >> str;

cout << str << endl;
cout << str.length() << endl;
cout << str[0] << endl;
cout << str[str.length() - 1] << endl;

return 0;
}
