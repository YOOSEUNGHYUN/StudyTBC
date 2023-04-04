#include <iostream>
using namespace std;

int main()
{

	int a;
	cin >> a;

	if (a == 0)
	{
		cout << "니가 입력한 수는 0이다." << endl;
	}

	else if (a % 2 == 1)
	{
		cout << "니가 입력한 수는 홀수다." << endl;
	}

	else if (a % 2 == 0)
	{
		cout << " 니가 입력한 숫자는 짝수다." << endl;
	}

	return 0;
}

