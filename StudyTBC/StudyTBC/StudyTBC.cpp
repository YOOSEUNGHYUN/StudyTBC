#include <iostream>
#include <iomanip>	//	input/output manipulators

// ostream���� ����ϱ�
using namespace std;

int main()
{
	//cout.setf(std::ios::showpos);	// plus ��ȣ ���
	//cout << 108 << endl;

	//cout.unsetf(std::ios::showpos);	// plus ��ȣ �����
	//cout << 109 << endl;

	//cout.unsetf(std::ios::dec);	//	10���� ��� ����
	//cout.setf(std::ios::hex);	//	16���� ��� �ѱ�

	//cout.setf(std::ios::hex, std::ios::basefield);	// basefield�� hex �ٷ� set

	//cout.setf(std::ios::uppercase);	//	16���� ���ĺ� �빮�ڷ� ���
	cout << std::hex << std::uppercase;
	cout << 108 << endl;
	cout << 109 << endl;

	cout << std::dec;
	cout << 110 << endl;

	return 0;
}