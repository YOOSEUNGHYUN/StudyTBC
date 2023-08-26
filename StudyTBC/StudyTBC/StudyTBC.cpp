#include <iostream>
#include <string>
#include <vector>

// std::string 대입, 교환, 덧붙이기(append), 삽입
using namespace std;

int main()
{
	string str1("one");

	//string str2;
	//str2 = str1;
	//str2 = "two";
	//str2.assign("two").append(" ").append("three ").append("Four");		
	//// assign은 자기자신의 레퍼런스를 return 한다.

	string str2("two");

	//cout << str1 << " "<< str2 << endl;
	//std::swap(str1, str2);
	//cout << str1 << " " << str2 << endl;
	//str1.swap(str2);
	//cout << str1 << " " << str2 << endl;

	//str1.append("three");
	//str1.push_back('A');	// push_back은 문자열은 안되고 문자만 들어간다.
	//str1 += "three";

	//str1 = str2 + "four";

	string str("aaaa");
	str.insert(2, "bbb");
	cout << str << endl;	// aabbbaa

	return 0;
}