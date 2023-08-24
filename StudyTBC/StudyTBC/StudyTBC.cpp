#include <iostream>
#include <string>

// std::string의 길이와 용량
using namespace std;

int main()
{
	string my_str("01234567");
	my_str.reserve(1000);		//	최소한 이정도는 잡아달라는 의미.

	cout << std::boolalpha;
	cout << my_str.empty() << endl;
	cout << my_str.length() << endl;
	cout << my_str.size() << endl;
	cout << my_str.capacity() << endl;
	cout << my_str.max_size() << endl;

	return 0;
}