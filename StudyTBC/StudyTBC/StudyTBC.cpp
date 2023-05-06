#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[5];
	strcpy_s(dest, source);

	cout << source << endl;
	cout << dest << endl;
	
	return 0;
}
