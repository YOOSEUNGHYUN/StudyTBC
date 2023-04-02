#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main()
{
	short       s = 1; // 2 bytes = 2 * 8 bits = 16 bits
	unsigned int         i = 1;

	cout << pow(2, sizeof(unsigned int) * 8) -1 << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<unsigned int>::min() << endl;
	cout << numeric_limits<unsigned int>::lowest() << endl;

	i = numeric_limits<unsigned int>::max();

	cout << "unsigned int max() : " << i << endl;

	i = i + 1;

	cout << i << endl;

	return 0;
}
