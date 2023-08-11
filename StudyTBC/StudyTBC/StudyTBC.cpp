#include <iostream>
#include <exception>
#include <string>
// 함수 try
using namespace std;

class A
{
private:
	int m_x;
public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	B(int x)
		: A(x)
	{
	}

	B(int x) try : A(x)
	{
		//	do initialization
	}
	catch (...)
	{
		cout << "Catch in B constructor " << endl;
		//throw; 없지만 있는 것 처럼 작동한다.
	}
};
void doSomething()
//try
//{
//	throw - 1;
//}
//catch (...)
//{
//	cout << "Catch in doSomething()" << endl;
//}

int main()
{
	try
	{
		//doSomething();
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}
}