#include "MyArray.h"
//#include "MyArray.cpp" 이렇게 하면 안돼

// 클래스 템플릿 templates
using namespace std;

int main()
{
	MyArray<char> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();

	return 0;
}

