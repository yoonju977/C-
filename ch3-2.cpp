#include <iostream>
using namespace std;

int main()
{
    int x, y;

    // x값 입력
    cout << "x값을 입력하세요: ";
    cin >> x;

    if(x > 0){
        cout<<"x는 양수 입니다."<<endl;
    }
    else if(x<0){
        cout<<"x는 음수입니다."<<endl;
    }
    else 
    cout <<"x는 0입니다."<<endl;

    return 0;
    
}