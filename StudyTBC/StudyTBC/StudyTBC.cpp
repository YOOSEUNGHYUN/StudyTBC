#include <iostream>
using namespace std;

int main()
{

	int a;
	cin >> a;

	if (a == 0)
	{
		cout << "�ϰ� �Է��� ���� 0�̴�." << endl;
	}

	else if (a % 2 == 1)
	{
		cout << "�ϰ� �Է��� ���� Ȧ����." << endl;
	}

	else if (a % 2 == 0)
	{
		cout << " �ϰ� �Է��� ���ڴ� ¦����." << endl;
	}

	return 0;
}

