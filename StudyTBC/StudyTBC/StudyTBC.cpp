#include <iostream>
#include <string>
using namespace std;
//static member function

class Something
{
public:
	class _init					// �̷������� ���������� �ʱ�ȭ ���� �� �� �ִ�.
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
		// static member variable�� constructor���� �ʱ�ȭ�� ������ �� ����. ������
		// ���⼭ �ʱ�ȭ �Ϸ��� �����ڰ� static�̾�� �ϴµ� C++������ static �����ڴ� �ȵȴ�.
	{

	}

	static int getValue()	// static������ this�� ����� �� ����.
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