#include <iostream>
#include <string>
#include <vector>

// std::string 문자 접근하기와 배열로의 변환
using namespace std;

int main()
{
	string my_str("abcdefg"); 
	
	try
	{
		//my_str[100] = 'X';	//	얘는 예외 처리를 안해준다, 퍼포먼스가 더 중요할 때
		my_str.at(100) = 'X';	// 똑같은 함수들이 vector에도 있다. , 안정성이 더 중요할 때

	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}