#include <iostream>
#include <string>
using namespace std;

int main(){
    int drinks;

    cout << "콜라, 물, 스프라이트, 주스, 커피 중에서 하나를 선택하세요(1,2,3,4,5) : ";
    cin >> drinks;

    if ( drinks == 1)
        cout << "콜라를 선택하였습니다." <<endl;
    else if (drinks == 2)
        cout << "물을 선택하였습니다."<<endl;
    else if (drinks == 3)
        cout << "스프라이트를 선택하였습니다."<<endl;
    else if (drinks == 4)
        cout << "주스을 선택하였습니다."<<endl;
    else if (drinks == 5)
        cout << "커피를 선택하였습니다."<<endl;
    else cout << " 오류. 선택이 유효하지 않습니다. 돈을 반환합니다."<<endl;

    return 0;
}