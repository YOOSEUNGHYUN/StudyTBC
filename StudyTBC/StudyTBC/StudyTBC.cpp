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
		return s_value;	// s_value는 정적으로 메모리에 존재하니까 가능
		// return this->s_value; 하면 에러난다.
		// return m_value; 얘도 에러난다.
		// static에서는 this pointer 못쓴다. this로 접근해야하는 모든 것이 안된다는 의미.
	}

	int temp()
	{
		return this->s_value;	
		// this를 사용한다는 것은 특정 인스턴스의 주소를 받아다가 
		// 그 인스턴스에 속해있는 멤버들의 주소를 가져다가 사용한다는 의미 
	}
};

int Something::s_value = 1024;

int main()
{
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	// int (Something::*fptr1)() = (s1.temp); 이러면 오류난다.
	// 함수에서는 s1 의 m_value와 s2의 m_value의 주소가 같다.
	
	int(Something::*fptr1)() = &Something::temp; // 이렇게 포인터를 넣어주면 들어간다.
												 // Something 에 속해있는 temp 라는 멤버함수라는 의미로 포인터를 넣어주면 들어간다.

	cout << (s2.*fptr1)() << endl;
	// Something 에 속해있는 temp 라는 멤버함수의 포인터를 갖고 있는데 이 포인터 위치에 있는 함수를 실행시킬 때
	// s2라는 인스턴스에 포인터를 넘겨주고 s2라는 인스턴스의 this pointer를 가져다가 사용하는 형태로 작동한다.
	// s2를 안쓰면 작동을 할 수가 없다. 왜냐하면 non-static member function은 인스턴스를 안주면 this pointer가 없으면 작동 못한다.
	return 0;
}