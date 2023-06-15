#include <iostream>
using namespace std;
// anonymous object

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void printDouble()
	{
		cout << m_value*2 << endl;
	}
};

int main()
{
	A a(1);
	a.printDouble();

	A(1).printDouble();	// r-value처럼 작동한다.

	//A a;
	//a.print();	 //변수 선언하고 여러번 출력할 경우 Constructor와 Destructor가 한번씩만 호출됨.
	//a.print();
	//a.print();

	//A().print(); // 별도로 변수를 만들지 않고 함수 실행 가능.
	//			 // A() 가 r-value 처럼 작동한다.
	//			 // 쓰고 나면 재사용 못한다.
	//A().print(); // 또 쓰면 위 아래 객체가 다르다.

	return 0;
}