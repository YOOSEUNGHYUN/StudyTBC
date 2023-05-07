#include <iostream>

using namespace std;

int main()
{
	int array[] = { 9, 7, 5, 3, 1 };

	int *ptr = array;
	for ( int i = 0; i < 5 ; ++i)
	{ 
		//cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}

	return 0;
}
