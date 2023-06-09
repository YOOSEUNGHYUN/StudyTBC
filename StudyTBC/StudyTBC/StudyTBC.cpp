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
	Simple(int id) // 생성자가 받아들여서 초기화 해주고 있음
	{
		/*this->*/setID(id); // 맨 앞에 this-> 가 숨어있다. -> operator는 class. structure, pointer의 경우 멤버선택연산자
		//(*this).setID(id); 이렇게도 할 수 있지만 굳이 이렇게 안쓴다.
		/*this->*/m_id; // this 에서 멤버변수도 접근가능하다.

		cout << this << endl; // 자기자신의 주소를 출력해준다.
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

	//Simple::setID(&s2, 4); 문법상 이렇게 쓸 수는 없지만 개념상 이렇다.
	//== s2.setID(4); 문법상은 이렇게만 된다.

	return 0;
}