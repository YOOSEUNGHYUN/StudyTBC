#include <iostream>
using namespace std;

typedef int* pint;

void foo(int *ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}


int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr = &value;

	cout << &ptr << endl;

	foo(ptr);
	foo(&value);
	//foo(5);//¸®ÅÍ·²ÀÌ¶ó ¾ÈµÅ

	return 0;
}
