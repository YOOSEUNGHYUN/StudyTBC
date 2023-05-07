#include <iostream>

using namespace std;

int main()
{
	double value = 7.0;
	double *ptr = &value;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;

	return 0;
}
