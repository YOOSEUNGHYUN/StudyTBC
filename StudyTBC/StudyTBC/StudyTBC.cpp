#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

// Move semantics and Smart pointers
using namespace std;

//	RAII : resource acquisition is initialization

void doSomething()
{
	try
	{ 
		Resource* res = new Resource;

		// work with res
		if (false)
		{
			throw - 1;	//	exception
		}

		delete res;
	}
	catch (...)
	{

	}

	return;
}

int main()
{
	{
		doSomething();

		/*AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;*/
	}

	return 0;
}