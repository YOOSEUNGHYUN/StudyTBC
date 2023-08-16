#include <iostream>
#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"
// �̵� �����ڿ� �̵� ���� Move constructors and Move assignment
using namespace std;

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(10000000));

	return res;
}

int main()
{
	streambuf* orig_buf = cout.rdbuf();
	//cout.rdbuf(NULL); // disconnect cout from buffer �α� �ȳ����� �ϴ°�

	Timer timer;
	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	cout.rdbuf(orig_buf);
	timer.elapsed();

	return 0;
}