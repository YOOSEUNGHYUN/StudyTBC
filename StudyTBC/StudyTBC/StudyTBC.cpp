#include <iostream> // cout, cin, endl, ...
using namespace std;

int addTwoNumbers(int a, int b)
{
	int sum = a + b;
	cout << sum << endl;

	return 0;
}

int main()
{
	int a;
	int b;

	cin >> a;
	cin >> b;

	while(1)
	{
		addTwoNumbers(a, b);
		cin >> a;
		cin >> b;
	}
	
	return 0;
}
