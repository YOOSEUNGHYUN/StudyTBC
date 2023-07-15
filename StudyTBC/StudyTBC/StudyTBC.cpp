#include <iostream>
// Inherited Functions 상속받은 함수를 오버라이딩 하기

using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{
	}

	void print()
	{
		cout << "I'm Base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		out << "This is base output" << endl;
		return out;
	}
};

class Derived : private Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{
	
	}

	void print()
	{
		Base::print();
		cout << "I'm Derived" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b);
		out << "This is Derived output" << endl;
		return out;
	}
};


int main()
{
	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;

	return 0;
}