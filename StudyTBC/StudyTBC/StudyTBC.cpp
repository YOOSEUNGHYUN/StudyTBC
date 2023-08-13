#include <iostream>
#include <memory>
// 예외처리의 위험성과 단점
using namespace std;

class A
{
public:
	~A()
	{
		//throw "error"; // 소멸자에서는 예외를 던질 수 없다.
	}
};

int main()
{
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}