#include <iostream>
using namespace std;

namespace a
{
	int my_var(10);
	int count(12312312);
}

namespace b
{
	int my_var(20);
}

int main()
{
	{
		using namespace a;
		cout << my_var << endl;
		cout << a::count << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	return 0;
}


