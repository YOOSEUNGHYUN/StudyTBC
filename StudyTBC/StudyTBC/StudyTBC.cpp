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

	void *my_void; //�ּ�

	my_void = (void*)&i; //������ ������ �ּ�
	my_void = (void*)&f; //�Ǽ��� ������ �ּ�

	return 0;
}
