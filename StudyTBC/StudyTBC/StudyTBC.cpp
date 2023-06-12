#include <iostream>
#include <string>
using namespace std;
//Class and Const

class Something
{
public:
	string m_value = "default";

	// const냐 아니냐를 가지고 overloading 할 수 있다.
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
	// non-const reference 면 값을 바꿔 줄 수 있다.
	Something something;
	something.getValue()=10;
	
	// const reference 는 값을 바꿀 수 없다.
	const Something something2;
	something2.getValue(); // = 1000 XXXXX

	return 0;
}