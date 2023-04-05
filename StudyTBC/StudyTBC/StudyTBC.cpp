#include <iostream>
using namespace std;

int main()
{
	// Decimal(10진수)      : 0 1 2 3 4 5 6 7 8 9 10
	// Octal(8진수)         : 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa Decimal(16진수) : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item; 

	return 0;
}

