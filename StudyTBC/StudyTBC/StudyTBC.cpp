#include <iostream>

//	Derived class 생성과 초기화

using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int & i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother construction " << endl;
	}
};

class Child : public Mother
{
public:
	float m_d;

public:
	Child()
		: Mother(1024), m_d(1.0f)
	{
		cout << "Child construction " << endl;
	}
};



int main()
{
	Child c1;
	cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;

	return 0;
}

