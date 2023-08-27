#include <iostream>
#include <string>
#include <iomanip>	//	input/output manipulators

// istream으로 입력받기
using namespace std;

int main()
{
	//char buf[5];	// 저장할 때 마지막에 null char 저장

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//cin >> setw(5) >> buf;
	//cout << buf << endl;


	//char ch;

	//while (cin >> ch)	// cin으로 가져올 때 빈칸 뺴고 가져온다.
	//	cout << ch;
	
	//// 빈칸도 입력받고 싶으면 cin.get()을 사용하면 된다.
	//char ch;
	//while (cin.get(ch))
	//	cout << ch;
	
	char buf[100];

	cin.get(buf, 100);
	cout << cin.gcount() << " " << buf << endl;

	cin.getline(buf, 100);	// 줄바꿈 char 까지 같이 읽음
	cout << cin.gcount() << " " << buf << endl;

	return 0;
}