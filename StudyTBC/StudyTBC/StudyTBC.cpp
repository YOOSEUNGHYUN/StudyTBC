#include <iostream>
using namespace std;

int main()
{
	int value = 5;
	
	/*int *ptr = nullptr;
	ptr = &value;*/

	int& ref = value;

	cout << ref << endl;

	ref = 10; //*ptr = 10;

	cout << value << " " << ref << endl;

	return 0;
}
