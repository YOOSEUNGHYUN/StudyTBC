#include <iostream>
#include <string>
#include <iomanip>	//	input/output manipulators

// istream���� �Է¹ޱ�
using namespace std;

int main()
{
	//string buf;
	//getline(cin, buf);	// string�� �� ������ cin�� �Ķ���ͷ� ����.
	//cout << cin.gcount() << " " << buf << endl;

	char buf[1024];

	//cin.ignore(2);	//	ignore()�� �Է¹��� �ѱ��ڸ� �����Ѵ�.
	//cout << (char)cin.peek() << endl;	//	peek()�� ��¦ ���⸸ �ϰ� ���ۿ��� �������� �ʴ´�.

	cin >> buf;
	cout << buf << endl;

	//cin.unget();	// �������� ���� ���� ���ۿ� �ٽ� �ִ´�.
	cin.putback('A');	//	���ϴ� ���ڸ� �ٽ� �ִ´�.

	cin >> buf;
	cout << buf << endl;

	return 0;
}