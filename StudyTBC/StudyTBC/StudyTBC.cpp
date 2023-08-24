#include <iostream>
#include <string>
#include <vector>
#include <sstream>	//	string stream

//	  std::string�� �������� �����ڵ�� ����ȯ
using namespace std;

template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;
	ossstream << x;
	return osstream.str();
}

template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);	// input string stream�� �ʱ�ȭ �� �� string�� �־ �ʱ�ȭ
	return (isstream >> x) ? true : false;
}

int main()
{
	std::string my_str(ToString(3.141592));

	double d;

	if (FromString(my_str, d))
		std::cout << d << std::endl;
	else
		std::cout << "Cannot convert string to double" << std::endl;

	std::cout << my_str << std::endl;
	

	return 0;
}