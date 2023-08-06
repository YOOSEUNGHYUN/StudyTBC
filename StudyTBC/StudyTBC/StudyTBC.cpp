#include <iostream>
#include <fstream>
#include <string>
// 예외 처리의 기본 Exception Handling
using namespace std;

int main()
{
	//try, catch, throw
	
	try
	{
		//	something happend
		throw std::string("My error message");
	}
	catch (int x)
	{
		cout << "Catch integer" << x << endl;
	}
	catch (double x)
	{
		cout << "Catch double " << x << endl;
	}
	catch (const char * error_message)
	{
		cout << "Char * " << error_message << endl;
	}
	catch (std::string error_message)
	{
		
		cout << error_message << endl;
	}

	return 0;
}