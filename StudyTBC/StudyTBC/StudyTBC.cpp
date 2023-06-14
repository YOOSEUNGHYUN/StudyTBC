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
		return s_value;	// s_value�� �������� �޸𸮿� �����ϴϱ� ����
		// return this->s_value; �ϸ� ��������.
		// return m_value; �굵 ��������.
		// static������ this pointer ������. this�� �����ؾ��ϴ� ��� ���� �ȵȴٴ� �ǹ�.
	}

	int temp()
	{
		return this->s_value;	
		// this�� ����Ѵٴ� ���� Ư�� �ν��Ͻ��� �ּҸ� �޾ƴٰ� 
		// �� �ν��Ͻ��� �����ִ� ������� �ּҸ� �����ٰ� ����Ѵٴ� �ǹ� 
	}
};

int Something::s_value = 1024;

int main()
{
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	// int (Something::*fptr1)() = (s1.temp); �̷��� ��������.
	// �Լ������� s1 �� m_value�� s2�� m_value�� �ּҰ� ����.
	
	int(Something::*fptr1)() = &Something::temp; // �̷��� �����͸� �־��ָ� ����.
												 // Something �� �����ִ� temp ��� ����Լ���� �ǹ̷� �����͸� �־��ָ� ����.

	cout << (s2.*fptr1)() << endl;
	// Something �� �����ִ� temp ��� ����Լ��� �����͸� ���� �ִµ� �� ������ ��ġ�� �ִ� �Լ��� �����ų ��
	// s2��� �ν��Ͻ��� �����͸� �Ѱ��ְ� s2��� �ν��Ͻ��� this pointer�� �����ٰ� ����ϴ� ���·� �۵��Ѵ�.
	// s2�� �Ⱦ��� �۵��� �� ���� ����. �ֳ��ϸ� non-static member function�� �ν��Ͻ��� ���ָ� this pointer�� ������ �۵� ���Ѵ�.
	return 0;
}