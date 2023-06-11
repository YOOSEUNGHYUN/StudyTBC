#include <iostream>
using namespace std;
//Class and Const

class Something
{
public:
	int m_value = 0;

	// copy constructor
	Something(const Something& st_in) //�̷� ������ �ϴ°� �����ִ�. �׷��� ����ڰ� �������� ������� �� �ִ�.
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value;}

	int getValue() const // ���⿡�ٰ� const�� ���ָ� �� ����Լ��� const�� ��� �ϴ� ��. ���� �ٲ��� �ʴ´�.
	{ 
		return m_value; 
	}
};


void print(const Something &st)	// Ư���� ��찡 �ƴϰ� const�� �� �ٿ��� 11:40
{
	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	//const Something something;
	//// something.setValue(3); ���ʿ� �߸���

	//cout << something.getValue() << endl; // �����Ϸ��� ����Լ��� const�� �ƴϳĸ� �Ǵ��Ѵ�.

	Something something;
	cout << &something << endl;
	print(something);

	return 0;
}