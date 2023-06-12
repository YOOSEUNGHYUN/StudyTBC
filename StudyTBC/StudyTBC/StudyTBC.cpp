#include <iostream>
#include <string>
using namespace std;
//Class and Const

class Something
{
public:
	string m_value = "default";

	// const�� �ƴϳĸ� ������ overloading �� �� �ִ�.
	const string& getValue() const 
	{ 
		cout << "const version" << endl;
		return m_value; 
	}

	string& getValue() 
	{
		cout << "non-const version" << endl;
		return m_value; 
	}

};


int main()
{
	// non-const reference �� ���� �ٲ� �� �� �ִ�.
	Something something;
	something.getValue()=10;
	
	// const reference �� ���� �ٲ� �� ����.
	const Something something2;
	something2.getValue(); // = 1000 XXXXX

	return 0;
}