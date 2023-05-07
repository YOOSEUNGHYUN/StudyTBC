#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };

};

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
}

int main()
{
	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	doSomething(ms);

	return 0;
}
