#include <iostream>
#include <string>
using namespace std;
//static member function

class Something
{
private:
	static int s_value;
	int m_value;

public:
	static int getValue()
	{
		return s_value;	
	
	}

	int temp()
	{
		return this->s_value;	
		
	}
};

int Something::s_value = 1024;

int main()
{
	cout << Something::getValue() << endl; 
	// Something에 들어있기는 하지만 getValue()를 특정 인스턴스에 상관없이 실행시킬 수 있다.

	Something s1, s2;
	cout << s1.getValue() << endl;
	
	int (Something::*fptr1)() = &Something::temp; 

	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue; // 앞에 Something::을 뗴어줘야 포인터로 갖고올 수 있음.
	// 특정 인스턴스에 상관없이 실행시킬 수 있는 function pointer로 나온다.

	cout << fptr2() << endl; // 특정 인스턴스를 연결시켜주지 않아도 작동이 된다.

	return 0;
}