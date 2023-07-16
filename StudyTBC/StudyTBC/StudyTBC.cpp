#include <iostream>
// Inherited Functions ��ӹ��� �Լ��� ���߱�
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm Base" << endl;
	}

};

class Derived : public Base
{
private:
	double m_d;
	using Base::print; // �Լ� �̸� ���� ��ȣ ġ�� �ȵ�

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;

private:
	void print() = delete; // �ڽĿ����� ���ٺҰ�. �θ𿡼��� ���ٰ���
};


int main()
{
	Base base(5);
	base.print();

	Derived derived(7);

	derived.m_i = 1024;
	//derived.print();
	
	return 0;
}