#include <iostream>

using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

int main()
{
	int(*fcnptr)() = func;

	cout << fcnptr() << endl;

	fcnptr = goo;

	cout << fcnptr() << endl;

	return 0;
}
