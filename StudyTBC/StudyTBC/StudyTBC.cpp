#include <iostream>
using namespace std;

auto add(int x, int y) -> int
{
	return x + y;
}

auto add(double x, double y)
{
	return x + y;
}

int main()
{
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;

	auto result = add(1, 2);

	return 0;
}


