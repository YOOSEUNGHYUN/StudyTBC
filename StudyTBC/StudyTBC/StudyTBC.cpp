#include "Calc.h"

//Class code and Header File
using namespace std;

int main()
{
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();

	Calc(10).add(10).sub(1).mult(2).print();

	return 0;
}