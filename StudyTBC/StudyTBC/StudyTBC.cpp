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

	int getCents() const		// member variable을 갖고 있지 않으니까 const로 선언해준다.
	{
		return m_cents;
	}
};

Cents add(const Cents& c1, const Cents& c2)		// Cents 클래스를 리턴해주는 함수
{
	return Cents(c1.getCents() + c2.getCents());		// 두개의 멤버의 합을 멤버로 갖는 Cents를 새로 만들어 return
}

int main()
{
	cout << add(Cents(6), Cents(8)).getCents() << endl;		// add 함수가 Cents를 return 하고 있어서 getCents를 리턴할 수 있다.
	cout << int(6) + int(8) << endl;

	return 0;
}