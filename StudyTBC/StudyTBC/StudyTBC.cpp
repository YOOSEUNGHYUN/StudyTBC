#include <iostream>		
#include <cctype>
#include <string>
#include <bitset>
// stream states and input validation 흐름 상태와 입력 유효성 검증
using namespace std;

void printCharacterClassification(const int& i)
{
	cout << boolalpha;
	cout << "isalnum " << bool(std::isalnum(i)) << endl;	// <cctpye>에 있음, 알파벳 또는 넘버, return type이 integer다.
	cout << "isblank " << bool(std::isblank(i)) << endl;
	cout << "isdigit " << bool(std::isdigit(i)) << endl;	// decimal digit 10진수 숫자냐
	cout << "islower " << bool(std::islower(i)) << endl;	// 소문자냐
	cout << "isupper " << bool(std::isupper(i)) << endl;	// 대문자냐

	//www.cplusplus.com/reference/cctype/
}

void printStates(const std::ios& stream)
{
	//	stream은 file과 console에 대해서 일관성있게 구현할때 편함.
	//	특히 file 입출력을 같이 할 때 
	//	C 언어에서는 fprintf()를 별도로 사용하는데
	//	C++ 에서는 console 출력을 위한 코드를 파일 입출력을 위해서 그대로 사용할 수 있다.
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;	//	end of file 파일을 다 읽었는지 체크할 때
	cout << "fail()=" << stream.fail() << endl;	//	실패했을 때 true, 좋은 상태면 false
	cout << "bad()=" << stream.bad() << endl;

	//www.cpluscpls.com/reference/ios/ios/
}

void classifyCharacters(const string& str)	
{
	//	입력받은 string을 한글자씩 다 뒤져본다.

	for (auto e : str)
	{
		cout << e << endl;
		std::cout << "isdigit " << std::isdigit(e) << endl;
		std::cout << "isblank " << std::isblank(e) << endl;
		std::cout << "isalpha " << std::isalpha(e) << endl;
	}
}

int main()
{
	//while (true)
	//{
	//	char i;
	//	cin >> i;		// cin에서는 blank를 자른다.

	//	printStates(cin);

	//	//cout << i << endl;

	//	//cout << boolalpha;
	//	//cout << std::bitset<8>(cin.rdstate()) << endl;			// good대신에 readstate 호출
	//	//cout << std::bitset<8>(std::istream::goodbit) << endl;	//	mask
	//	//cout << std::bitset<8>(std::istream::failbit) << endl;	//	mask
	//	//cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;	
	//	//	readstate로 읽어온 flag로 부터 failbit mask를 이용해서 현재 상태를 추출
	//	//	logical and operation을 해서 0이 아니라면 fail인 상태 
	//	//	goodbit 을 호출하려면 앞에 not operator를 붙여줌
	//	//cin.rdstate() == std::istream::goodbit;	// 이렇게 추출하는 방법도 있음.

	//	printCharacterClassification(i);

	//	cin.clear();
	//	cin.ignore(1024, '\n');	// 앞에서 buffer에 입력받은 것들 다 처리 하고 다시 받기위해서 청소
	//	cout << endl;
	//}

	cout << boolalpha;
	classifyCharacters("1234");
	classifyCharacters("a 1234");

	//	regular expression

	return 0;
}

