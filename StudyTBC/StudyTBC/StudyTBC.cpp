#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

// Move semantics and Smart pointers
using namespace std;

//	RAII : resource acquisition is initialization

//void doSomething()
//{
//	try
//	{ 
//		//Resource* res = new Resource; // dull pointer
//		AutoPtr<Resource> res(new Resource); // smart pointer
//
//		return;
//
//		// work with res
//		if (true)
//		{
//			throw - 1;	//	exception
//		}
//
//		//delete res;
//	}
//	catch (...)
//	{
//
//	}
//
//	return;
//}

int main()
{
	{
		//doSomething();

		AutoPtr<Resource> res1(new Resource); // int i; int *ptr1(&i); int *ptr2 = nullptr;
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;	//소유권 이전 move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	//// syntax vs. semantics
	//int x = 1, y = 1;
	//x + y;

	//string str1("Hello"), str2("World");
	//str1 + str2;	// append

	//	value semantics (copy semantics)
	//	reference semantics (pointer)
	//	move semantics (move)

	return 0;
}