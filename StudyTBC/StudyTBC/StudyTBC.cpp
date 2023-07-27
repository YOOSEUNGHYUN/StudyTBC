#include <iostream>
#include <vector>
#include <functional>
// Dynamic Casting 동적 형변환

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

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};


int main()
{
	Derived1 d1;
	d1.m_j = 2048;
	// ....

	Base *base = &d1;

	auto* base_to_d1 = dynamic_cast<Derived1*>(base);

	if (base_to_d1 != nullptr)
		base_to_d1->print();
	else
		cout << "Failed" << endl;

	
	return 0;
}