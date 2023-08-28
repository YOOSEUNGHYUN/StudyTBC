#include <iostream>		//	cout ���
#include <sstream>		//	string stream �� ����
// string stream(���� ���� �ϴ�) ���ڿ� �帧
using namespace std;

int main()
{
	stringstream os;

	os << "Hello, World!";	//	stringstream�� ���ϴ� ������ ����ִ´�.
							//	<< : insertion operator		�����͸� ����ִ´�.
							//	>> : extraction operator	�����͸� �̾ƿ´�.
	
	os << "Hello, World!2" << endl;	// �տ� Hello, World!�� ���ٿ��� ���´�.
									// endl; �ٹٲ޵� stringstream�� ����.
	//os.str("Hello, World!");	// ���ۿ� �ִ� ������ �� ����� ���� �̰ɷ� �ٲٴ� ����
	//os.str("Hello, World!\n");	//	�ٹٲ޵� string�� ������.

	string str;

	//os >> str;	// �̷��� extraction �� �� ����. but ��ĭ�� ������ �߶������.
	str = os.str();	// ��ĭ ���� string�� ��°�� �����´�.

	cout << str << endl;	 
	cout << os.str() << endl;	//	���� ����ϴ� ����� �ִ�.
	

	return 0;
}