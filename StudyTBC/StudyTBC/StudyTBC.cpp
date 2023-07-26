#include <iostream>
#include <vector>
#include <functional>
// object slicing and reference_wrapper

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main()
{/*
	Derived d;
	Base &b = d;

	b.print();

	doSomething(d);*/

	Base b;
	Derived d;

	std::vector<std::reference_wrapper<Base>> my_vec;	// ������ �����̽� ����

	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print();

	return 0;
}