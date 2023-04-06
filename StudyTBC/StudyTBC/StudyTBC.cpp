#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	bool a = false;
	bool b = true;
	bool c = false;
	bool d = false;

	cout << boolalpha;
	cout << a << " " << b << " " << c << " " << d << endl;
	 
	// <<,>> 이 &&보다 우선 순위가 높아서 cout << a 또는 cout << (a || b) 까지만 나온다. 
	cout << a || b && c || d;
	cout << (a || b) && (c || d);
	cout << a || (b && c) || d;
	cout << (a || b) && c || d;
	cout << a || b && (c || d);

	cout << '\t' << (a || b && c || d) << endl;

	return 0;
}

