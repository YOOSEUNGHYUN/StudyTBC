#include <iostream>
using namespace std;

typedef int* pint;

void foo(double degrees, double *sin_out, double *cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}


int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr = &value;

	cout << &ptr << endl;

	double degrees = 30;
	double sin, cos;

	foo(degrees, &sin, &cos);
	cout << sin << " " << cos << endl;
	
	return 0;
}
