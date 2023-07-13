#include <iostream>

// 유도된 클래스에 새로운 기능 추가하기

using namespace std;

class Base
{
private:
	int m_value;
public:
	Base(int value)
		: m_value(value)
	{

	}
};

class Derived : private Base
{
public:
	Derived(int value)
		: Base(value)
	{
	
	}
};


int main()
{

	return 0;
}