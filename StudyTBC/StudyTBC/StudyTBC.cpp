#include <iostream>
#include <iomanip>	//	input/output manipulators

// ostream으로 출력하기
using namespace std;

int main()
{
	//cout.setf(std::ios::showpos);	// plus 기호 출력
	//cout << 108 << endl;

	//cout.unsetf(std::ios::showpos);	// plus 기호 사라짐
	//cout << 109 << endl;

	//cout.unsetf(std::ios::dec);	//	10진수 모드 끄기
	//cout.setf(std::ios::hex);	//	16진수 모드 켜기

	//cout.setf(std::ios::hex, std::ios::basefield);	// basefield에 hex 바로 set

	//cout.setf(std::ios::uppercase);	//	16진수 알파벳 대문자로 출력
	cout << std::hex << std::uppercase;
	cout << 108 << endl;
	cout << 109 << endl;

	cout << std::dec;
	cout << 110 << endl;

	return 0;
}