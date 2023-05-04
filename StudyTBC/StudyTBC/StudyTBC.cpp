#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//cout << source << endl;
	//cout << dest << endl;

	//strcat()
	//strcmp()

	return 0;
}