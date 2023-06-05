#include <iostream>
#include <string>
#include <vector>
//Constructors
using namespace std;

class Second
{
public:
	Second()
	{
		cout << "Class Second Constructor()" << endl;
	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "Class First Constructor()" << endl;
	}
};

int main()
{
	First fir;

	return 0;
}