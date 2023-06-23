#include <iostream>

// Overloading 증감연산자
using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	// prefix
	Digit& operator ++ ()
	{
		++m_digit;
		return *this;
	}

	// postfix
	// prefix와 구분 할 때에는 파라미터에 int 같은거 아무거나 넣어주면 된다.
	Digit operator ++ (int)
	{
		Digit temp(m_digit); // 먼저 현재 값을 저장한다.

		++(*this);

		return temp;
	}


	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;

	return 0;
}