#include <iostream>		//	cout 사용
#include <sstream>		//	string stream 의 약자
// string stream(버퍼 역할 하는) 문자열 흐름
using namespace std;

int main()
{
	stringstream os;

	os << "Hello, World!";	//	stringstream에 원하는 문구를 집어넣는다.
							//	<< : insertion operator		데이터를 집어넣는다.
							//	>> : extraction operator	데이터를 뽑아온다.
	
	os << "Hello, World!2" << endl;	// 앞에 Hello, World!에 덧붙여서 나온다.
									// endl; 줄바꿈도 stringstream에 포함.
	//os.str("Hello, World!");	// 버퍼에 있는 내용을 싹 지우고 전부 이걸로 바꾸는 거임
	//os.str("Hello, World!\n");	//	줄바꿈도 string에 포함임.

	string str;

	//os >> str;	// 이렇게 extraction 할 수 있음. but 빈칸이 있으면 잘라버린다.
	str = os.str();	// 빈칸 포함 string을 통째로 가져온다.

	cout << str << endl;	 
	cout << os.str() << endl;	//	직접 출력하는 방법도 있다.
	

	return 0;
}