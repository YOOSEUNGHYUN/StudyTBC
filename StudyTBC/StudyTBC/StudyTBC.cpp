#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	/*bool x = true;
	bool y = true;
	
	cout << boolalpha;
	cout << (true && true) || false;
	cout << (false && true) || true;
	cout << (false && true) || false || true;
	cout << (14 > 13 || 2 > 1) && (9 > 1);
	cout << !(2314123 > 2 || 123123 > 2387) << endl;
	cout << true || false;
	cout << (false && true);*/

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);


	cout << boolalpha;
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;


	return 0;
}


