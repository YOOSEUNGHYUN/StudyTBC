#include <iostream>

using namespace std;

//while, break, �����Ϳ� ���������� ++ptr�� ����Ͽ� ���ڿ��� '\0'�� ������ �ʰ� ����غ��� 
int main()
{
	char name[] = "Hello Hyoni";
	const int n_name = sizeof(name) / sizeof(char);
	char *ptr = name;

	while(1)
	{
		int i = 0;
		
		if (*ptr != '\0')
		{
			cout << *(ptr);
			++ptr;
		}
		else
			break;
	}
	
	return 0;
}
