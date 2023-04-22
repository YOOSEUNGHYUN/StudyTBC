#include <iostream>
#include <cmath> //sqrt()

using namespace std;


int main()
{
	double x;

tryAgain : // label
	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;

	return 0;
}


