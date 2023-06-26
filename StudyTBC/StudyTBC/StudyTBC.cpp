#include <iostream>
// Overloading static_cast typecasts
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	//	int 형으로 변환을 하는 형변환을 오버로딩 하는 것
	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input) {}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}
};

void printInt(const int& value)
{
	cout << value << endl;
}

int main()
{
	//Cents cents(7);
	// overloading 한 typecast 연산자를 사용하고 있다는 것을 확인 할 수 있다.
	/*int value = (int)cents;
	value = int(cents);
	value = static_cast<int>(cents);*/

	Dollar dol(2);
	Cents cents = dol;

	printInt(cents);

	return 0;
}