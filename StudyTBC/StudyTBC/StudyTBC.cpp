#include <iostream>

// ������ Ŭ������ ���ο� ��� �߰��ϱ�

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