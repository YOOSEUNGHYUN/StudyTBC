#include <iostream>
#include <string>
#include <vector>

// std::string ���� �����ϱ�� �迭���� ��ȯ
using namespace std;

int main()
{
	string my_str("abcdefg"); 
	
	try
	{
		//my_str[100] = 'X';	//	��� ���� ó���� �����ش�, �����ս��� �� �߿��� ��
		my_str.at(100) = 'X';	// �Ȱ��� �Լ����� vector���� �ִ�. , �������� �� �߿��� ��

	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}