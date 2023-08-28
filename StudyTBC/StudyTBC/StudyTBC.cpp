#include <iostream>		//	cout 사용
#include <sstream>		//	string stream 의 약자
// string stream(버퍼 역할 하는) 문자열 흐름
using namespace std;

int main()
{
	// 빈칸으로 구분한다.

	stringstream os;

	//int i = 12345;
	//double d = 67.89;

	//os << i << " " << d;
	os << "12345 67.89";

	//string str1;
	//string str2;

	//os >> str1 >> str2;

	//cout << str1 << "|" << str2 << endl;

	/*int i2;
	double d2;

	os >> i2 >> d2;

	cout << i2 << "|" << d2 << endl;*/

	//	stringstream을 비우려면
	os.str("");			//	방법 1
	os.str(string());	//	방법 2
	os.clear();			//	방법 3	먼저 os.str(""); 하고 써야함. state까지 초기화한다.
	cout << os.str() << endl;

	return 0;
}