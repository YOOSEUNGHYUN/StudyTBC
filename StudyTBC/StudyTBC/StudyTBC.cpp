#include <iostream>	
#include <vector>
#include <utility> // std::forward

using namespace std;

//	완벽한 전달 Perfect Forwarding과 std::forward

struct MyStruct
{};

void func(MyStruct& s) //	L-value refernce
{
	cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s) //	R-value refernce
{
	cout << "Pass by R-ref" << endl;
}

//void func(MyStruct s)
//{
//	cout << "Pass by Value" << endl;
//}

//template<typename T>
//void func_wrapper(T&& t)
//{
//	func(std::forward<T>(t));
//}

int main()
{
	MyStruct s;

	/*func(s);
	func(MyStruct());*/
	
}