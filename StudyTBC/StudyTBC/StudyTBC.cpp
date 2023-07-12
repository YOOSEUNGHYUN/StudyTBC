#include <iostream>

//	상속과 접근 지정자

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		//Base::m_private;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived::m_public;
	}
};
int main()
{
	Derived derived;

	//base.m_public = 123;

	return 0;
}