#include <iostream>
#include <memory>
// ����ó���� ���輺�� ����
using namespace std;

class A
{
public:
	~A()
	{
		//throw "error"; // �Ҹ��ڿ����� ���ܸ� ���� �� ����.
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