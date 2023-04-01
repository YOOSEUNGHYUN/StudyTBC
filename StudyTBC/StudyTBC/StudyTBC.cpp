#include <iostream>
using namespace std;

namespace MySpace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}

	int doSomething(int a, int b)
	{
		return a + b;
	}

}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

int main()
{
	using namespace MySpace1::InnerSpace;
	my_function();

	/*cout << MySpace1::doSomething(3, 4) << endl;
	cout << MySpace2::doSomething(3, 4) << endl;*/

	return 0;
}
