#include <iostream>
#include <string>
#include <vector>

// std::string ����, ��ȯ, �����̱�(append), ����
using namespace std;

int main()
{
	string str1("one");

	//string str2;
	//str2 = str1;
	//str2 = "two";
	//str2.assign("two").append(" ").append("three ").append("Four");		
	//// assign�� �ڱ��ڽ��� ���۷����� return �Ѵ�.

	string str2("two");

	//cout << str1 << " "<< str2 << endl;
	//std::swap(str1, str2);
	//cout << str1 << " " << str2 << endl;
	//str1.swap(str2);
	//cout << str1 << " " << str2 << endl;

	//str1.append("three");
	//str1.push_back('A');	// push_back�� ���ڿ��� �ȵǰ� ���ڸ� ����.
	//str1 += "three";

	//str1 = str2 + "four";

	string str("aaaa");
	str.insert(2, "bbb");
	cout << str << endl;	// aabbbaa

	return 0;
}