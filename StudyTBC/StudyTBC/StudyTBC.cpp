#include <iostream>
#include <cstddef>
#include <string>
#include <locale>

//	  std::string �� std::wstring
using namespace std;

int main()
{
	//	c-style string example
	//{
	//	char* strHello = new char[7];
	//	strcpy_s(strHello, sizeof(char) * 7, "hello!");
	//	std::cout << strHello << std::endl;
	//}

	//basic_string<>, string, wstring
	{
		std::string string;
		std::wstring wstring;

		wchar_t wc;	// ������ ������ ū ���� wide-character/unicode ������ ǥ���� �� ���� ���
	}
	
	//	wstring example
	{
		//	Stackoverflow.com
		//	C++ Code to cout international characters using Visual Studio 2015 �� �˻�
		// http://stackoverflow.com/questions/33404685/c-code-to-cout-international-characters-using-visual-strudio-2015

		const std::wstring texts[] =
		{
			L"�ȳ��ϼ���?", //Korean
			L"??", //Spanish
			L"for?t int?r?t",  //French
			L"Ges?��",  //German
			L"�������������",  //Chinesse
			L"�����ѪΫӫë�",  //Japanese
			L"�߬֬ެ߬�Ԭ� �����ܬڬ�",  //Russian
			L"?��� �����?��� ���? ��������??", //Greek
			L"?????? ?? ??? ????",  //Punjabi
			L"??? ?? ????? ",  //Persian
			L"???? ? ??? ???? ?????", //Telugu
			L"���� �ܬѬܬӬ�, ��� �լ�Ӭ�ݬڬ��, �� ���Ӭ�?",  //Bulgarian
		};

		std::locale::global(std::locale(""));
		std::wcout.imbue(std::locale());

		for (size_t i = 0; i < 11; ++i)
			std::wcout << texts[i] << std::endl;
	}

	return 0;
}