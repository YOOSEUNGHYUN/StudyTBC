#include <iostream>

using namespace std;

namespace work1
{
	namespace work11
	{ 
		int a = 1;
		void doSomething()
		{
			a += 3;
			cout << a << endl;
		}
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
		cout << a << endl;
	}
}

int main()
{
	work1::a;
	work1::work11::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}


