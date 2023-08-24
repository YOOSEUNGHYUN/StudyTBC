#include <iostream>
#include <string>
#include <vector>

// std::string 문자 접근하기와 배열로의 변환
using namespace std;

int main()
{
	string my_str("abcdefg"); 
	
	cout << my_str.c_str() << endl;		// const char

	const char* arr = my_str.data();	// c_str과 같은 함수 data() 가 있다.
										// 마지막에 null char 붙는다.

	cout << (int)arr[6] << endl;
	cout << (int)arr[7] << endl;		// string은 null char가 저장되지 않는다.
										// 그러나 c_str로 가져올 때는 뒤에 null char 붙어서 가져온다.

	return 0;
}