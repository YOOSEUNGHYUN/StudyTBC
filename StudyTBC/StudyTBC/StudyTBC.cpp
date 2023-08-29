#include <iostream>		
#include <cctype>
#include <string>
#include <bitset>
// stream states and input validation �帧 ���¿� �Է� ��ȿ�� ����
using namespace std;

void printCharacterClassification(const int& i)
{
	cout << boolalpha;
	cout << "isalnum " << bool(std::isalnum(i)) << endl;	// <cctpye>�� ����, ���ĺ� �Ǵ� �ѹ�, return type�� integer��.
	cout << "isblank " << bool(std::isblank(i)) << endl;
	cout << "isdigit " << bool(std::isdigit(i)) << endl;	// decimal digit 10���� ���ڳ�
	cout << "islower " << bool(std::islower(i)) << endl;	// �ҹ��ڳ�
	cout << "isupper " << bool(std::isupper(i)) << endl;	// �빮�ڳ�

	//www.cplusplus.com/reference/cctype/
}

void printStates(const std::ios& stream)
{
	//	stream�� file�� console�� ���ؼ� �ϰ����ְ� �����Ҷ� ����.
	//	Ư�� file ������� ���� �� �� 
	//	C ������ fprintf()�� ������ ����ϴµ�
	//	C++ ������ console ����� ���� �ڵ带 ���� ������� ���ؼ� �״�� ����� �� �ִ�.
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;	//	end of file ������ �� �о����� üũ�� ��
	cout << "fail()=" << stream.fail() << endl;	//	�������� �� true, ���� ���¸� false
	cout << "bad()=" << stream.bad() << endl;

	//www.cpluscpls.com/reference/ios/ios/
}

void classifyCharacters(const string& str)	
{
	//	�Է¹��� string�� �ѱ��ھ� �� ��������.

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
	//	cin >> i;		// cin������ blank�� �ڸ���.

	//	printStates(cin);

	//	//cout << i << endl;

	//	//cout << boolalpha;
	//	//cout << std::bitset<8>(cin.rdstate()) << endl;			// good��ſ� readstate ȣ��
	//	//cout << std::bitset<8>(std::istream::goodbit) << endl;	//	mask
	//	//cout << std::bitset<8>(std::istream::failbit) << endl;	//	mask
	//	//cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;	
	//	//	readstate�� �о�� flag�� ���� failbit mask�� �̿��ؼ� ���� ���¸� ����
	//	//	logical and operation�� �ؼ� 0�� �ƴ϶�� fail�� ���� 
	//	//	goodbit �� ȣ���Ϸ��� �տ� not operator�� �ٿ���
	//	//cin.rdstate() == std::istream::goodbit;	// �̷��� �����ϴ� ����� ����.

	//	printCharacterClassification(i);

	//	cin.clear();
	//	cin.ignore(1024, '\n');	// �տ��� buffer�� �Է¹��� �͵� �� ó�� �ϰ� �ٽ� �ޱ����ؼ� û��
	//	cout << endl;
	//}

	cout << boolalpha;
	classifyCharacters("1234");
	classifyCharacters("a 1234");

	//	regular expression

	return 0;
}

