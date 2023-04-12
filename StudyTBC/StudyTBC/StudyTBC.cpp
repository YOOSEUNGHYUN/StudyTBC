#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	//코드 길어져서 opt4, 5, 6, 7 생략함

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout << "No item " << bitset<8>(items_flag) << endl;

	//item0 on


	return 0;
}


