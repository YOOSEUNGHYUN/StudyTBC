#include <iostream>
#include <string>
#include <vector>
//this pointer and Chaining Member Functions
using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	/*void*/ 
	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this;	}
	Calc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}

};

int main()
{
	Calc cal(10);

	/*Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mult(2);
	temp3.print();*/
	// 위에 코드를 줄이면 이렇게 됨 (Member Function Chaining)
	cal.add(10).sub(1).mult(2).print();

	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);*/
	//cal.print();


	return 0;
}