#include <iostream>
using namespace std;

void addOne(int &y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

int main()
{
	int x = 5;

	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;

	return 0;
}
