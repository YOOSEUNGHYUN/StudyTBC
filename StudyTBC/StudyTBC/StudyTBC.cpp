#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	x = x + 2;
	cout << x << endl;                 // #1

	int y = x;
	cout << y << endl;                 // #2

	//is (x+y) l-value or r-value?
	cout << x + y << endl;             // #3

	cout << x << endl;                 // #4
	
	int z;
	z = y;
	cout << z << endl;                 // #5

	return 0;
}

//3 3 6 3 3