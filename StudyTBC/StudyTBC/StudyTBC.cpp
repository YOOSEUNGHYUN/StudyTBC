#include <iostream>
#include <array>
#include "Storage8.h"
// Å¬·¡½º ÅÛÇÃ¸´ Æ¯¼öÈ­ Specialization
using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{}

	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}
};

//template<>
//class A<char>	//	specialization
//{
//public:
//	A(const char& temp)
//	{}
//
//
//	void doSomething()
//	{
//		cout << "Char type specialization" << endl;
//	}
//};

int main()
{
	//A<int>		a_int(1);
	//A<double>	a_double(3.14);
	//A<char>		a_char('a');

	//a_int.test();
	//a_double.test();
	////a_char.test(); ¾ê´Â ¾ÈµÅ

	//a_int.doSomething();
	//a_double.doSomething();
	//a_char.doSomething();

	// Define a Storage8 for integers
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.get(count) << '\n';

	cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

	// Define a Storage8 for bool
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
		boolStorage.set(count, count & 3);

	for (int count = 0; count < 8; ++count)
		std::cout << (boolStorage.get(count) ? "true" : "false") << '\n';

	cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl;

	return 0;

}
