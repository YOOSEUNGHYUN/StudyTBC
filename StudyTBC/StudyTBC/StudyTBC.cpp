#include <iostream>
// Inherited Functions 상속받은 함수를 감추기
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
	using Base::print; // 함수 이름 옆에 괄호 치면 안돼

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;

private:
	void print() = delete; // 자식에서는 접근불가. 부모에서는 접근가능
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