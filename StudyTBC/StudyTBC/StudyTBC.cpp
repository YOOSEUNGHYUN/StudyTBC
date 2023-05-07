#include <iostream>

using namespace std;

const char* getName()
{
	return "Hyoni";
}

int main()
{
	//char name[] = "Hello Hyoni";
	/*const char* name = getName();
	const char *name2 = getName();

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;*/

	/*int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char *name = "Hyoni";*/

	//cout에서 문자열은 특별하게 처리한다.
	//cout << int_arr << endl;		//	주소
	//cout << char_arr << endl;		// 문자열
	//cout << name << endl;			// 문자열

	char c = 'Q';
	cout << &c << endl;				// 이상한 문자 출력됨

	return 0;
}
