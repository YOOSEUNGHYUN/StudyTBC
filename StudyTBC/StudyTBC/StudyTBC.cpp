#include <iostream>
#include <string>
using namespace std;
//static member variation

class Something
{
public:
	//static int s_value = 1; // static member var는 initialize 할 수 없다.
	static int s_value;
};

int Something::s_value = 1;		// *** static 멤버 변수는 헤더에 넣지말고 cpp 파일에 넣어야 한다. 
								// *** 헤더에 두면 에러난다. 중복선언 문제 발생한다.

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;
	// static이라서 밑에 st1,st2가 없어도 s_value에 접근이 가능하다. (메모리에 정적으로 존재한다는 것)

	Something st1;
	Something st2;

	st1.s_value = 2;	// static 붙이면 st1의 값만 바꿔도 st2 값도 같이 바뀐다.

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}