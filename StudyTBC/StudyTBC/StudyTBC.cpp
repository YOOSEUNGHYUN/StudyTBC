#include <iostream>
#include <string>
using namespace std;
//static member function

class Something
{
public:
	class _init					// 이런식으로 간접적으로 초기화 해줄 수 는 있다.
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;	
	int m_value;

	static _init s_initializer;

public:
	Something()
		: m_value(123)//, s_value(111) 
		// static member variable은 constructor에서 초기화도 시켜줄 수 없다. 사용못함
		// 여기서 초기화 하려면 생성자가 static이어야 하는데 C++에서는 static 생성자는 안된다.
	{

	}

	static int getValue()	// static에서는 this를 사용할 수 없다.
	{
		return s_value;	
	}

	int temp()
	{
		return this->s_value;	
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

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