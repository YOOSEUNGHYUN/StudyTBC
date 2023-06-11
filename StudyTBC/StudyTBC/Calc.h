#pragma once
#include <iostream>
//header file에서는 using namespace 하지마라 안좋다.

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);
	
	// class 안에 멤버함수의 definition을 직접 다 적어놓았을 경우에는 
	// 얘를 inline 하고 싶다는 의사로 간주한다.
	// 그래서 cpp 파일로 옮기면 header에서 나갔지만 inline 하고 싶었을 수 있으니까 붙여줌

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	void print();

};

