#include <iostream>		//	cout ���
#include <sstream>		//	string stream �� ����
// string stream(���� ���� �ϴ�) ���ڿ� �帧
using namespace std;

int main()
{
	// ��ĭ���� �����Ѵ�.

	stringstream os;

	//int i = 12345;
	//double d = 67.89;

	//os << i << " " << d;
	os << "12345 67.89";

	//string str1;
	//string str2;

	//os >> str1 >> str2;

	//cout << str1 << "|" << str2 << endl;

	/*int i2;
	double d2;

	os >> i2 >> d2;

	cout << i2 << "|" << d2 << endl;*/

	//	stringstream�� ������
	os.str("");			//	��� 1
	os.str(string());	//	��� 2
	os.clear();			//	��� 3	���� os.str(""); �ϰ� �����. state���� �ʱ�ȭ�Ѵ�.
	cout << os.str() << endl;

	return 0;
}