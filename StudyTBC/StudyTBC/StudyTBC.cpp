#include <iostream>
#include "MY_CONSTANTS.h"
using namespace std;

int main()
{
	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}

