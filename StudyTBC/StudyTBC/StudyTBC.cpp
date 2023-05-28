#include <iostream>
#include <array>
#include <functional>
using namespace std;

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

//typedef bool(*check_fcn_t)(const int&);

using check_fcn_t = bool(*)(const int&);

void printNumber(const array<int, 10> &my_array, 
	std::function<bool(const int&)> check_fcn)
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element;
		/*if (print_even && element % 2 == 1) cout << element;*/
	}
	cout << endl;
}

int main()
{
	std::array<int, 10> my_array{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::function<bool(const int&)> fcnptr = isEven;

	printNumber(my_array, fcnptr);

	fcnptr = isOdd;
	printNumber(my_array, fcnptr);
	

	return 0;
}
