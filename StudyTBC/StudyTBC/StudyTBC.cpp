#include <iostream>
#include <string>
#include <iomanip>	//	input/output manipulators

// istream���� �Է¹ޱ�
using namespace std;

int main()
{
	//char buf[5];	// ������ �� �������� null char ����

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//cin >> setw(5) >> buf;
	//cout << buf << endl;


	//char ch;

	//while (cin >> ch)	// cin���� ������ �� ��ĭ ���� �����´�.
	//	cout << ch;
	
	//// ��ĭ�� �Է¹ް� ������ cin.get()�� ����ϸ� �ȴ�.
	//char ch;
	//while (cin.get(ch))
	//	cout << ch;
	
	char buf[100];

	cin.get(buf, 100);
	cout << cin.gcount() << " " << buf << endl;

	cin.getline(buf, 100);	// �ٹٲ� char ���� ���� ����
	cout << cin.gcount() << " " << buf << endl;

	return 0;
}