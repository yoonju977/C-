#include <iostream>
using namespace std;

int main()
{
	for (int i = 10; i >= 1; i--) {
        cout << i;
        if (i > 1) {
            cout << ", "; // 숫자 사이에 쉼표 추가
        }
    }

	cout << " 발사!" << endl;
	return 0;
}