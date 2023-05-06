#include <iostream>

using namespace std;

int main()
{
	char myString[255];

	//cin >> myString;
	cin.getline(myString, 255);

	//cout << myString << endl;

	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0') break;

		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}
	
	return 0;
}
