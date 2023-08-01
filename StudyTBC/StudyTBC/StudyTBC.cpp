#include "MyArray.h"
// �ڷ����� �ƴ� ���ø� �Ű����� Non-type Template Parameters
using namespace std;

int main()
{
	//	������ Ÿ�ӿ� �������� �ʾҾ ���� (cin���� ���Ծ ����)
	//	std::vector<double> my_array; my_array.resize(100);
	//	MyArray<double> my_array(100);
	
	// �ؿ� ���� ���ڴ� ������ Ÿ�ӿ� ������ �Ǿ��־�߸� ��
	MyArray<double, 100> my_array;	// std::array<double,100>

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();

	return 0;
}

