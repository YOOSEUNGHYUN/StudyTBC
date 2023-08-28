#include <iostream>
#include <iomanip>	//	input/output manipulators

// ostream으로 출력하기
using namespace std;

int main()
{
	cout << -12345 << endl;
	cout.fill('*');		// 빈칸을 *로 다 채워준다.
	cout << std::setw(10) << -12345 << endl;
	cout << std::setw(10) << std::left << -12345 << endl;
	cout << std::setw(10) << std::right << -12345 << endl;
	cout << std::setw(10) << std::internal << -12345 << endl;	// 부호와 숫자 사이에 빈칸

	return 0;
}