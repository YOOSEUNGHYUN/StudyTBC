#include "Calc.h"
using namespace std; // 얘는 cpp 파일에 큰 영향을 주지 않아서 여기에 써도 된다.

Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc& Calc::sub(int value)
{
	m_value -= value;
	return *this;
}

Calc& Calc::mult(int value) 
{ 
	m_value *= value; 
	return *this; 
}

void Calc::print()
{
	cout << m_value << endl;
}

