#include <iostream>
// Overloading Arithmetic Operator
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; } // ������
	int getCents() const { return m_cents; } // �ܺ� access
	int& getCents() { return m_cents; }

	// =, [], (), -> ��׵��� �̷�����(member function)���θ� overloading�� �����ϴ�.
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}
};

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	/*Cents sum;
	add(cents1, cents2, sum);*/

	/*cout << add(cents1, cents2).getCents() << endl;*/

	cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(100)).getCents() << endl;

	/*int i = 6, j = 8;
	cout << i + j << endl;*/

	// �����ε� �ȵǴ� �͵�
	// ?: ���ǿ����� :: ���������� sizeof . member selection .* member pointer selection
	//  operator overloading�� �ϸ� ������ �켱������ �״�δ�.
	// ^ operator�� ������ �켱������ �ſ� ����. �긦 ������ ��ȣ�� �׾ƾ� �Ѵ�. �ظ��ϸ� overloading ��������\


	return 0;
}