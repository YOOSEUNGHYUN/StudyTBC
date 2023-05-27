#include <iostream>
#include <array>
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

void printNumber(const array<int, 10> &my_array, bool (*check_fcn)(const int&))
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

	printNumber(my_array, isEven);
	printNumber(my_array, isOdd);
	

	return 0;
}
