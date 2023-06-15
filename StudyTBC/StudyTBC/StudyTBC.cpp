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

	A(1).printDouble();	// r-valueó�� �۵��Ѵ�.

	//A a;
	//a.print();	 //���� �����ϰ� ������ ����� ��� Constructor�� Destructor�� �ѹ����� ȣ���.
	//a.print();
	//a.print();

	//A().print(); // ������ ������ ������ �ʰ� �Լ� ���� ����.
	//			 // A() �� r-value ó�� �۵��Ѵ�.
	//			 // ���� ���� ���� ���Ѵ�.
	//A().print(); // �� ���� �� �Ʒ� ��ü�� �ٸ���.

	return 0;
}