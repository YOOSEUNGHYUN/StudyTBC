#include <iostream>
using namespace std;
// anonymous object

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents)
	{
		m_cents = cents;
	}

	int getCents() const		// member variable�� ���� ���� �����ϱ� const�� �������ش�.
	{
		return m_cents;
	}
};

Cents add(const Cents& c1, const Cents& c2)		// Cents Ŭ������ �������ִ� �Լ�
{
	return Cents(c1.getCents() + c2.getCents());		// �ΰ��� ����� ���� ����� ���� Cents�� ���� ����� return
}

int main()
{
	cout << add(Cents(6), Cents(8)).getCents() << endl;		// add �Լ��� Cents�� return �ϰ� �־ getCents�� ������ �� �ִ�.
	cout << int(6) + int(8) << endl;

	return 0;
}