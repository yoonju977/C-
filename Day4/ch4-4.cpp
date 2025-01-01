#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "I like apple";
    string str1 = "Thankyou";

    cout << str.length() << endl;
    cout << str.at(7) << endl;
    cout << str.front() << endl;
    cout << str.back() <<endl;

    string str2 = " verry much";
    cout << str1.append(str2)<<endl;
    cout << str1 << endl;

    string str3 = "!!!";
    str1 = str1 + str3;
    
    cout << str1 << endl;

    str.replace(0,1,"You");
    cout << str << endl;

    str.insert(9,"red");
    cout << str << endl;

    cout << str.find("apple")<<endl;

    cout<<str.find("pi")<<endl;

    if(string :: npos == str.find("pi")){
        cout << "pi가 포함되어 있지 않음";
    }

    cout << str.substr(4,4)<<endl;


    return 0;

}