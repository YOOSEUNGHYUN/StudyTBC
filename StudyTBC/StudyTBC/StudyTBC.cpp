#include <iostream>
#include <string>

// std::string의 길이와 용량
using namespace std;

int main()
{
	string my_str("012345678");

	cout << my_str.size() << endl;	// C style은 뒤에 null char이 추가되는데 C++은 아님.
									// string은 class 이다. 
									// 내부적으로 포인터말고 문자열 char *말고 길이를 직접 가지고 있다.
									// 문자가 끝났는지 안끝났는지 null char을 찾을 필요가 없다.

	return 0;
}