#include <iostream>
#include <string>
#include <vector>

// std::string ���� �����ϱ�� �迭���� ��ȯ
using namespace std;

int main()
{
	string my_str("abcdefg");

	char buf[20];

	my_str.copy(buf, 5, 1);

	buf[5] = '\0';

	cout << buf << endl;

	return 0;
}