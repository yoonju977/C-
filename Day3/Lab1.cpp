#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cout << "첫 번째 문자열 : ";
    cin >> str1;

    cout << "두 번째 문자열 : ";
    cin >> str2;

    if (str1 == str2){
        cout << " 2개의 문자열은 같습니다."<<endl;

    }
    else cout << "2개의 문자열은 다릅니다."<<endl;

    return 0;

}