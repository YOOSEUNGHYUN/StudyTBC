#include <iostream>
// Virtual Tables
// 가상 (함수) 표

using namespace std;

class Base
{
public:
	//FunctionPointer *_vptr;
	virtual void fun1() {};
	virtual void fun2() {};
};

class Der : public Base
{
public:
	//FunctionPointer *_vptr;
	virtual void fun1() {};
	virtual void fun3() {};
};

int main()
{
	Base my_base;
	Der my_derived;

	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;

	return 0;
}