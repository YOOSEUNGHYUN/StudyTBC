#include <iostream>
#include <string>
#include <vector>

// std::string ���� �����ϱ�� �迭���� ��ȯ
using namespace std;

int main()
{
	string my_str("abcdefg"); 
	
	cout << my_str.c_str() << endl;		// const char

	const char* arr = my_str.data();	// c_str�� ���� �Լ� data() �� �ִ�.
										// �������� null char �ٴ´�.

	cout << (int)arr[6] << endl;
	cout << (int)arr[7] << endl;		// string�� null char�� ������� �ʴ´�.
										// �׷��� c_str�� ������ ���� �ڿ� null char �پ �����´�.

	return 0;
}