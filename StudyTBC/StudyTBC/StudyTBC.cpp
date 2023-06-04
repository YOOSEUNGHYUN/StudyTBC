#include <iostream>
#include <string>
#include <vector>
//Encapsulation, Access Specifiers, Access Functions
using namespace std;

class Date
{
//private:이 기본이다. 막는걸 기본으로 한다.
private:			//access specifier
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	void setDay(const int& day_input)
	{
		m_day = day_input;
	}

	// setters
	void setYear(const int& year_input)
	{
		m_year = year_input;
	}

	// getters
	const int& getDay()			// 보통 멤버변수 접근함수를 만들때는 const로 막는다.
	{
		return m_day;
	}

	void copyFrom(const Date& original) // 자기 자신의 타입을 파라미터로 받는다.
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today; //{ 8, 4, 2025 };
	/*today.m_month = 8;
	today.m_day = 4;
	today.m_year = 2025;*/

	today.setDate(8, 4, 2025);
	today.setMonth(10);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	return 0;
}
