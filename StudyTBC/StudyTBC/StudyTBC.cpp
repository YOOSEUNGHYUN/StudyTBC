#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	/*cout << posinf << " " << isinf(posinf) << endl;
	cout << neginf << " " << isinf(neginf) << endl;
	cout << nan << " " << isnan(nan) << endl;
	cout << 1.0 << " " << isnan(1.0) << endl;*/

	//°úÁ¦
	cout << setprecision(8);
	cout << 31.41592e-1 << endl;
	cout << 3.141e1 << endl;
	printf("%f\n", 1.0e-3f);
	cout << 1230.002e-1 << endl;
	cout << setprecision(13);
	float a = 1 / (float)10000010000;
	printf("%.10f\n", a);
	double b = 234560000.000;
	printf("%.3f\n", 234560000000.e-3f);

	return 0;
}
