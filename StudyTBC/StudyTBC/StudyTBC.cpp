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
	 
	// <<,>> �� &&���� �켱 ������ ���Ƽ� cout << a �Ǵ� cout << (a || b) ������ ���´�. 
	cout << a || b && c || d;
	cout << (a || b) && (c || d);
	cout << a || (b && c) || d;
	cout << (a || b) && c || d;
	cout << a || b && (c || d);

	cout << '\t' << (a || b && c || d) << endl;

	return 0;
}

