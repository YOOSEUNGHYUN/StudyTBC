#include <iostream>
using namespace std;
//Class and Const

class Something
{
public:
	int m_value = 0;

	// copy constructor
	Something(const Something& st_in) //이런 역할을 하는게 숨어있다. 그런데 사용자가 수동으로 만들어줄 수 있다.
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value;}

	int getValue() const // 여기에다가 const를 쳐주면 이 멤버함수가 const다 라고 하는 것. 값을 바꾸지 않는다.
	{ 
		return m_value; 
	}
};


void print(const Something &st)	// 특별한 경우가 아니고선 const를 다 붙여라 11:40
{
	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	//const Something something;
	//// something.setValue(3); 애초에 잘못됨

	//cout << something.getValue() << endl; // 컴파일러는 멤버함수가 const냐 아니냐를 판단한다.

	Something something;
	cout << &something << endl;
	print(something);

	return 0;
}