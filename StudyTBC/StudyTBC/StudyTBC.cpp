#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double d1(100 - 99.99);  // 0.001
	double d2(10 - 9.99);    // 0.001

	const double epsilon = 1e-16;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal " << endl;

	return 0;
}


