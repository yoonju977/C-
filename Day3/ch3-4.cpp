#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 100; i >= 1; i--)
		sum += i;

	cout << "1부터 100까지의 정수의 합 = " << sum << endl;
	return 0;
}