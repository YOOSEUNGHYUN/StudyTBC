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
	// Something�� ����ֱ�� ������ getValue()�� Ư�� �ν��Ͻ��� ������� �����ų �� �ִ�.

	Something s1, s2;
	cout << s1.getValue() << endl;
	
	int (Something::*fptr1)() = &Something::temp; 

	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue; // �տ� Something::�� ������ �����ͷ� ����� �� ����.
	// Ư�� �ν��Ͻ��� ������� �����ų �� �ִ� function pointer�� ���´�.

	cout << fptr2() << endl; // Ư�� �ν��Ͻ��� ����������� �ʾƵ� �۵��� �ȴ�.

	return 0;
}