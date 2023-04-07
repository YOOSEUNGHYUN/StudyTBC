#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	int y = 4;

	int z = x;
	z += y; // z = z + y;
	cout << z << endl;

	z -= y; // z = z - y;
	cout << z << endl;

	z *= y; // z = z * y;
	cout << z << endl;

	z /= y; // z = z / y;
	cout << z << endl;

	z %= y; // z = z % y;
	cout << z << endl;

	return 0;
}


