#include <iostream>
#include <iomanip>	//	input/output manipulators

// ostream���� ����ϱ�
using namespace std;

int main()
{
	cout << -12345 << endl;
	cout.fill('*');		// ��ĭ�� *�� �� ä���ش�.
	cout << std::setw(10) << -12345 << endl;
	cout << std::setw(10) << std::left << -12345 << endl;
	cout << std::setw(10) << std::right << -12345 << endl;
	cout << std::setw(10) << std::internal << -12345 << endl;	// ��ȣ�� ���� ���̿� ��ĭ

	return 0;
}