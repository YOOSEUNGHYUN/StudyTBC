#include <iostream>
#include <iomanip>	//	input/output manipulators

// ostream으로 출력하기
using namespace std;

int main()
{
	//cout << std::boolalpha;	//	bool값이 0과 1이 아닌 true, false로 나온다.
	//cout << true << " " << false << endl;

	//cout << std::defaultfloat;	// 기본
	//cout << std::scientific << std::uppercase;	// 알파벳 E 대문자로
	//cout << std::fixed;				//	소수점 뒷 자리 고정
	cout << std::showpoint;	// 소수점이 나온다.
	cout << std::setprecision(3) << 123.456 << endl;	
	cout << std::setprecision(4) << 123.456 << endl;	// 반올림
	cout << std::setprecision(5) << 123.456 << endl;
	cout << std::setprecision(6) << 123.456 << endl;
	cout << std::setprecision(7) << 123.456 << endl;


	return 0;
}