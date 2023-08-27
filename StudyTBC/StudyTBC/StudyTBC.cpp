#include <iostream>
#include <string>
#include <iomanip>	//	input/output manipulators

// istream으로 입력받기
using namespace std;

int main()
{
	//string buf;
	//getline(cin, buf);	// string을 쓸 때에는 cin이 파라미터로 들어간다.
	//cout << cin.gcount() << " " << buf << endl;

	char buf[1024];

	//cin.ignore(2);	//	ignore()은 입력받은 한글자를 무시한다.
	//cout << (char)cin.peek() << endl;	//	peek()은 살짝 보기만 하고 버퍼에서 꺼내지는 않는다.

	cin >> buf;
	cout << buf << endl;

	//cin.unget();	// 마지막에 읽은 것을 버퍼에 다시 넣는다.
	cin.putback('A');	//	원하는 글자를 다시 넣는다.

	cin >> buf;
	cout << buf << endl;

	return 0;
}