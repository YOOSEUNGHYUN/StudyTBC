#include <iostream>
#include <string>
#include <vector>
//Constructors
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	//Fraction()
	//{
	//	m_numerator = 1;
	//	m_denominator = 1;
	//}

	Fraction(const int& num_in = 1, const int& den_in = 1) 
	// 생성자는 return 값이 없다! 반환데이터 타입이 없고
    // 클래스와 이름이 동일하면 생성자 Constructor다.
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

int main()
{
	//Fraction frac; // 여기에 선언과 동시에 메모리에 자리를 잡는 동시에 바로 생성자가 실행된다.
				   // frac 다음에 괄호가 없다!
				   // 생성자의 파라미터가 하나도 없을 경우에만 괄호를 안쓴다.
				   // 생성자가 없을 때에는 아무것도 안하는 default생성자가 숨어있다. Fraction() {}
				   // 파라미터가 없는 생성자를 호출 할 때는 괄호를 꼭 뺴야한다. 
				   // 오류 해결 방법은 기본 생성자를 만들어라. 또는 파라미터가 있는 생성자에 오버로딩해서 default값 넣어버려라

	Fraction frac{ 1, 3 }; //uniform initialization은 타입변환을 허용하지 않는다.
	frac.print();

	/*Fraction one_thirds(1);
	one_thirds.print();*/

	return 0;
}