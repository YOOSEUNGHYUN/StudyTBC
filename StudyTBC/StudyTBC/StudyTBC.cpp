#include <iostream>
#include <string>
#include <vector>

//	  std::string�� �������� �����ڵ�� ����ȯ
using namespace std;

int main()
{
	//std::string my_string("my string");
	//const char* my_string = "my string";

	std::vector<char> vec;
	for (auto e : "Today is a good day.")
		vec.push_back(e);

	std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));

	std::cout << second_string << std::endl;

	return 0;
}