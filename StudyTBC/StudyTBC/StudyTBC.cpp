#include <iostream>
#include <iomanip>	//	input/output manipulators

// ostream���� ����ϱ�
using namespace std;

int main()
{
	//cout << std::boolalpha;	//	bool���� 0�� 1�� �ƴ� true, false�� ���´�.
	//cout << true << " " << false << endl;

	//cout << std::defaultfloat;	// �⺻
	//cout << std::scientific << std::uppercase;	// ���ĺ� E �빮�ڷ�
	//cout << std::fixed;				//	�Ҽ��� �� �ڸ� ����
	cout << std::showpoint;	// �Ҽ����� ���´�.
	cout << std::setprecision(3) << 123.456 << endl;	
	cout << std::setprecision(4) << 123.456 << endl;	// �ݿø�
	cout << std::setprecision(5) << 123.456 << endl;
	cout << std::setprecision(6) << 123.456 << endl;
	cout << std::setprecision(7) << 123.456 << endl;


	return 0;
}