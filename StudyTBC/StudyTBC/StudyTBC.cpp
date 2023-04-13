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
	items_flag |= opt0; //  or operator |
	cout << "Item0 obtained  " << bitset<8>(items_flag) << endl;

	//item3 on
	items_flag |= opt3; //  or operator |
	cout << "Item0 obtained  " << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3; //  item을 잃었을 때에는 not ~ 을 붙여서 bitwise & 사용 
	cout << "Item3 lost  " << bitset<8>(items_flag) << endl;

	//has item1 ?
	if (items_flag & opt1) //opt1과 items_flag를 비교해서 opt1이 해당하는 자리 이진수가 1이면 true를 return 해준다.
	{
		cout << "Has item1 " << endl;
	}
	else
	{
		cout << "Not have item1" << endl;
	}

	//has item0 ?
	if (items_flag & opt0) //opt1과 items_flag를 비교해서 opt1이 해당하는 자리 이진수가 1이면 true를 return 해준다.
	{
		cout << "Has item0 " << endl;
	}
	else
	{
		cout << "Not have item0" << endl;
	}

	//obtain item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;
	

	if((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt2) | (opt1);
	}

	cout << bitset<8>(items_flag) << endl;

	return 0;
}


