#pragma once
#include <iostream>
//header file������ using namespace �������� ������.

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);
	
	// class �ȿ� ����Լ��� definition�� ���� �� ��������� ��쿡�� 
	// �긦 inline �ϰ� �ʹٴ� �ǻ�� �����Ѵ�.
	// �׷��� cpp ���Ϸ� �ű�� header���� �������� inline �ϰ� �;��� �� �����ϱ� �ٿ���

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	void print();

};

