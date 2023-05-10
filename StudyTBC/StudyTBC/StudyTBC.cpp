#include <iostream>
using namespace std;

int main()
{
	//int var;
	//var = 7;
	int *ptr = new (std::nothrow)int{ 7 };

	if(ptr)
	{ 
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;
	if(ptr != nullptr)
	{ 
		cout << ptr << endl;
 		cout << *ptr << endl;
	}

	return 0;
}
