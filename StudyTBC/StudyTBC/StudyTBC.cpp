#include <iostream>
#include <string>
#include <vector>
//this pointer and Chaining Member Functions
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id) // �����ڰ� �޾Ƶ鿩�� �ʱ�ȭ ���ְ� ����
	{
		/*this->*/setID(id); // �� �տ� this-> �� �����ִ�. -> operator�� class. structure, pointer�� ��� ������ÿ�����
		//(*this).setID(id); �̷��Ե� �� �� ������ ���� �̷��� �Ⱦ���.
		/*this->*/m_id; // this ���� ��������� ���ٰ����ϴ�.

		cout << this << endl; // �ڱ��ڽ��� �ּҸ� ������ش�.
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
};

int main()
{
	Simple s1(1), s2(2); 
	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;

	//Simple::setID(&s2, 4); ������ �̷��� �� ���� ������ ����� �̷���.
	//== s2.setID(4); �������� �̷��Ը� �ȴ�.

	return 0;
}