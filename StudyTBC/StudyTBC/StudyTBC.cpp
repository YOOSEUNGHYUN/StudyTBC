#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

int main()
{
	//numeric conversion
	cout << 5u - 10u;

	// (가장 낮음)int, unsigned int, long, unsigned long, 
	// long long, unsigned long long, float, double
	// long double 우선순위 (가장 높음)

	return 0;
}


