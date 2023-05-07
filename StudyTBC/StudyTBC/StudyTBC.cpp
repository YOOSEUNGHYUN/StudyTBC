#include <iostream>

using namespace std;

//while, break, 포인터와 증감연산자 ++ptr을 사용하여 문자열을 '\0'은 나오지 않게 출력해봐라 
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
