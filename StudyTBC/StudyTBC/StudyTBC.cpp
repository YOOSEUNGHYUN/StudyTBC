#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50] = "Copy this!";
	//strcpy_s(dest, source);

	//strcat() 한 문자열 뒤에 어떠한 문자열을 붙여준다.
	//strcmp() 두 문자열이 동일한지 비교해본다.

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
