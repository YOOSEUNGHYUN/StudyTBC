#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
		result *= base;

	return result;
}

int main()
{
	for(int j = 0; j <9; ++j)
		for (int i = 0; i < 9; ++i)
		{
			cout << i << " " << j << endl;
		}

	return 0;
}


