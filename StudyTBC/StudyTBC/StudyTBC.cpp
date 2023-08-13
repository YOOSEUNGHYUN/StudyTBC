#include <iostream>
#include <memory>
// 예외처리의 위험성과 단점
using namespace std;

class A
{
public:
	~A()
	{
		throw "error";
	}
};

int main()
{
	try
	{
		int *i = new int[1000000];
		unique_ptr<int> up_i(i);
		
		// do something with i
		throw "error";

		//delete[] i;

		//A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}