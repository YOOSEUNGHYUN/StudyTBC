#include <iostream>
#include <string>

// std::string�� ���̿� �뷮
using namespace std;

int main()
{
	string my_str("012345678");

	cout << my_str.size() << endl;	// C style�� �ڿ� null char�� �߰��Ǵµ� C++�� �ƴ�.
									// string�� class �̴�. 
									// ���������� �����͸��� ���ڿ� char *���� ���̸� ���� ������ �ִ�.
									// ���ڰ� �������� �ȳ������� null char�� ã�� �ʿ䰡 ����.

	return 0;
}