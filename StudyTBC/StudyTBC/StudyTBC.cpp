#include <iostream>
#include <string>
#include <vector>
//Destructor
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

int main()
{
	//Simple s1(0);
	Simple *s1 = new Simple(0);
	Simple s2(1);

	delete s1;
	// ���� �Ҹ��ڴ� instance�� �޸𸮿��� ������ �� ���ο��� �ڵ����� ȣ��.
	// �����Ҵ����� ������� ��쿡�� ������ ����� �ڵ����� �޸𸮰� �������� �ʱ� ������
	// delete�� �޸𸮸� ������ ������ �Ҹ��ڰ� ȣ��ȴ�.
	// �Ҹ��ڸ� ���α׷��Ӱ� ���� ȣ���ϴ� ���� ��κ��� ��� �������� �ʴ´�.


	return 0;
}