#include <iostream>
//#include <cstdint>
using namespace std;

void my_function()
{

}

int main()
{
	int i = 123;
	float f = 123.456f;

	void *my_void; //주소

	my_void = (void*)&i; //정수형 변수의 주소
	my_void = (void*)&f; //실수형 변수의 주소

	return 0;
}
