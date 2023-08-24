#include <iostream>
#include <string>
#include <vector>

// std::string 문자 접근하기와 배열로의 변환
using namespace std;

int main()
{
	string my_str("abcdefg");
	
	cout << my_str[0] << endl;
	cout << my_str[3] << endl;

	my_str[3] = 'Z';

	cout << my_str << endl;

	return 0;
}