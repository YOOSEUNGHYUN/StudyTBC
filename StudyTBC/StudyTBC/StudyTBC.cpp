#include <iostream>
#include <string>
#include <vector>
//Encapsulation, Access Specifiers, Access Functions
using namespace std;

class Date
{
//private:�� �⺻�̴�. ���°� �⺻���� �Ѵ�.
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
	const int& getDay()			// ���� ������� �����Լ��� ���鶧�� const�� ���´�.
	{
		return m_day;
	}

	void copyFrom(const Date& original) // �ڱ� �ڽ��� Ÿ���� �Ķ���ͷ� �޴´�.
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
