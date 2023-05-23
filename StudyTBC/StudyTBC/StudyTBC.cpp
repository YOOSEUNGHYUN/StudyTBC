#include <iostream>
using namespace std;

typedef int* pint;

void foo(const int * const ptr, int *arr, int length)
{
	for (int i = 0; i < length; ++i)
		cout << arr[i] << endl;

	arr[0] = 1.0;

	int x = 1;

	//ptr = &x;
}


int main()
{
	
	return 0;
}
