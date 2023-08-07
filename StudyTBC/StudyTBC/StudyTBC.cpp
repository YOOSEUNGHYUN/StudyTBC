#include <iostream>
#include <fstream>
#include <string>
// 예외 처리와 스택 되감기 Stack Unwinding
using namespace std;

// void last() throw(int) exception specifier
// void last() throw(...) exception specifier

void last()	throw(...)
{
	cout << "last " << endl;
	cout << "Throws exception" << endl;

	throw 'a';

	cout << "End last " << endl;
}

void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;
}

void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "Second caught double exception" << endl;
	}

	cout << "End second " << endl;
}

void first()
{
	cout << "first" << endl;

	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}

	cout << "End first " << endl;
}

int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		//cerr,cout,clog 로그를 콘솔에 출력하는 채널이라고 생각하면 됨. 
		cerr << "main caught int exception" << endl;
	}
	//	uncaught exceptions

	catch (...) // catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;
	
	return 0;
}