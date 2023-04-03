#include <iostream>
//#include <cstdint>
using namespace std;

int main()
{
	int16_t i(5);
	int8_t myint = 65;

	cout << myint << endl;

	int_fast8_t fi(5);
	int_least64_t fl(5);

	return 0;
}
