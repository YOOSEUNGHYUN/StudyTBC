#include <iostream>
using namespace std;

int& getValue(int x)
{
	int value = x * 2;
	return value;
}

int main()
{
	int value = getValue(5);

	cout << value << endl;


	return 0;
}
