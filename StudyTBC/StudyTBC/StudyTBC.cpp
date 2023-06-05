#include <iostream>
#include <string>
#include <vector>
//Constructors
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	//Fraction()
	//{
	//	m_numerator = 1;
	//	m_denominator = 1;
	//}

	Fraction(const int& num_in = 1, const int& den_in = 1) 
	// �����ڴ� return ���� ����! ��ȯ������ Ÿ���� ����
    // Ŭ������ �̸��� �����ϸ� ������ Constructor��.
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

int main()
{
	//Fraction frac; // ���⿡ ����� ���ÿ� �޸𸮿� �ڸ��� ��� ���ÿ� �ٷ� �����ڰ� ����ȴ�.
				   // frac ������ ��ȣ�� ����!
				   // �������� �Ķ���Ͱ� �ϳ��� ���� ��쿡�� ��ȣ�� �Ⱦ���.
				   // �����ڰ� ���� ������ �ƹ��͵� ���ϴ� default�����ڰ� �����ִ�. Fraction() {}
				   // �Ķ���Ͱ� ���� �����ڸ� ȣ�� �� ���� ��ȣ�� �� �����Ѵ�. 
				   // ���� �ذ� ����� �⺻ �����ڸ� ������. �Ǵ� �Ķ���Ͱ� �ִ� �����ڿ� �����ε��ؼ� default�� �־������

	Fraction frac{ 1, 3 }; //uniform initialization�� Ÿ�Ժ�ȯ�� ������� �ʴ´�.
	frac.print();

	/*Fraction one_thirds(1);
	one_thirds.print();*/

	return 0;
}