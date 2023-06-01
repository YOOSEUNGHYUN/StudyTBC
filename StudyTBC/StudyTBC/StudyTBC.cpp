#include <iostream>
#include <cassert> //assert.h
#include <array>
using namespace std;

int main()
{
	const int x = 5;

	assert(x == 5);

	static_assert(x == 5, "x should be 5");


	return 0;
}
