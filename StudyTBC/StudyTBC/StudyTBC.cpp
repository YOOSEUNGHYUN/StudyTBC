#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf
using namespace std;

int main()
{
	/*int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!\n\n\n\n";
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;
	cout << "abcde" << "\t" << "fghijk" << endl;

	cout << "\a";*/

	int x = 1;

	cout << "Before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}
