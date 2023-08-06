#include <iostream>
#include <fstream>
#include <string>

// 예외 처리의 기본 Exception Handling
using namespace std;


int main()
{
	//try, catch, throw
	double x;
	cin >> x;

	try
	{
		if (x < 0.0) throw std::string("Negative input");

		cout << std::sqrt(x) << endl;

	}
	catch (std::string error_message)
	{
		//	do something to respond
		cout << error_message << endl;
	}

	return 0;
}