#include <iostream>
// Overloading Arithmetic Operator
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; } // 생성자
	int getCents() const { return m_cents; } // 외부 access
	int& getCents() { return m_cents; }

	// =, [], (), -> 얘네들은 이런형태(member function)으로만 overloading이 가능하다.
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

	// 오버로딩 안되는 것들
	// ?: 조건연산자 :: 범위연산자 sizeof . member selection .* member pointer selection
	//  operator overloading을 하면 연산자 우선순위는 그대로다.
	// ^ operator는 연산자 우선순위가 매우 낮다. 얘를 쓰려면 괄호로 쌓아야 한다. 왠만하면 overloading 하지마라\


	return 0;
}