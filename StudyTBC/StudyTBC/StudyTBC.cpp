#include <iostream>
#include "Cents.h"
// 함수 템플릿 templates
using namespace std;

template<typename T>	// typename 대신에 class 적을 수 있음
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

//int getMax(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//double getMax(double x, double y)
//{
//	return (x > y) ? x : y;
//}
//
//float getMax(float x, float y)
//{
//	return (x > y) ? x : y;
//}
//
//char getMax(char x, char y)
//{
//	return (x > y) ? x : y;
//}

int main()
{
	std::cout << getMax(1, 2 ) << std::endl;
	std::cout << getMax(3.14, 1.592) << std::endl;
	std::cout << getMax(1.0f, 3.4f) << std::endl;
	std::cout << getMax('a', 'c') << std::endl;

	std::cout << getMax(Cents(5), Cents(9)) << std::endl;

	return 0;
}