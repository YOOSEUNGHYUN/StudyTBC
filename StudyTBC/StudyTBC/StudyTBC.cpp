#include <iostream>
using namespace std;

int main()
{
	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	int a (123);  // direct initialization
	int b{ 123 }; // uniform initialization

	int i = (int)3.141592;
	int z((int)3.14);
	int y{ 4 }; 

	//int k = 0, l = 456, m = 123;
	int k = 0, l(456), m{ 123 };

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	cout << sizeof(bool) << endl;

	return 0;
}
