#include "MyArray.h"
// 자료형이 아닌 템플릿 매개변수 Non-type Template Parameters
using namespace std;

int main()
{
	//	컴파일 타임에 결정되지 않았어도 가능 (cin으로 들어왔어도 가능)
	//	std::vector<double> my_array; my_array.resize(100);
	//	MyArray<double> my_array(100);
	
	// 밑에 들어가는 숫자는 컴파일 타임에 결정이 되어있어야만 함
	MyArray<double, 100> my_array;	// std::array<double,100>

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();

	return 0;
}

