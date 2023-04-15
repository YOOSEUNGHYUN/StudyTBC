#include <iostream>
#include "MyConstants.h"

using namespace std;

extern int a = 123;

void doSomething()
{
	cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << endl;
}
