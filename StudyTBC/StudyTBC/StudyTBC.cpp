#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50] = "Copy this!";
	//strcpy_s(dest, source);

	//strcat() �� ���ڿ� �ڿ� ��� ���ڿ��� �ٿ��ش�.
	//strcmp() �� ���ڿ��� �������� ���غ���.

	if (strcmp(source, dest))
	{
		cout << "Not Same" << endl;
	}
	else if (strcmp(source, dest) == 0)
	{
		cout << "Same Same" << endl;
		
	}
	return 0;
}
