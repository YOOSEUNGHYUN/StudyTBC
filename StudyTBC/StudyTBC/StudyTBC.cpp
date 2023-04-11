#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// << left shift
	// >> right shift
	// ~ bitwise not
	// & bitwise and 
	// | bitwise or
	// ^ bitwise xor
	
	unsigned int a = 0b0110;
	unsigned int x = 5;
	unsigned int y = 12;

	cout << std::bitset<8>(a >> 2)<< " " << (a >> 2) << endl;

	cout << std::bitset<16>(x) << endl;
	cout << std::bitset<16>(y) << endl;
	cout << std::bitset<16>(x | y) << "  " << (x | y) << endl;
	cout << std::bitset<16>(x & y) << "  " << (x & y) << endl;
	cout << std::bitset<16>(x ^ y) << "  " << (x ^ y) << endl;


	return 0;
}


