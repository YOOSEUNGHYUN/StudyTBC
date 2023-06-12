#include <iostream>
#include <string>
using namespace std;
//static member variation

class Something
{
public:
	//static int s_value = 1; // static member var�� initialize �� �� ����.
	static int s_value;
};

int Something::s_value = 1;		// *** static ��� ������ ����� �������� cpp ���Ͽ� �־�� �Ѵ�. 
								// *** ����� �θ� ��������. �ߺ����� ���� �߻��Ѵ�.

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;
	// static�̶� �ؿ� st1,st2�� ��� s_value�� ������ �����ϴ�. (�޸𸮿� �������� �����Ѵٴ� ��)

	Something st1;
	Something st2;

	st1.s_value = 2;	// static ���̸� st1�� ���� �ٲ㵵 st2 ���� ���� �ٲ��.

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}