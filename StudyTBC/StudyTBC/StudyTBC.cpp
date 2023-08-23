#include <iostream>
#include <cstddef>
#include <string>
#include <locale>

//	  std::string °ú std::wstring
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

		wchar_t wc;	// µ¥ÀÌÅÍ »çÀÌÁî Å« ¹®ÀÚ wide-character/unicode ±¹Á¦¾î Ç¥ÇöÇÒ ¶§ ¸¹ÀÌ »ç¿ë
	}
	
	//	wstring example
	{
		//	Stackoverflow.com
		//	C++ Code to cout international characters using Visual Studio 2015 ·Î °Ë»ö
		// http://stackoverflow.com/questions/33404685/c-code-to-cout-international-characters-using-visual-strudio-2015

		const std::wstring texts[] =
		{
			L"¾È³çÇÏ¼¼¿ä?", //Korean
			L"??", //Spanish
			L"for?t int?r?t",  //French
			L"Ges?©¬",  //German
			L"ö¢á¼÷îáÌìíĞôÑç",  //Chinesse
			L"ìíÜâìÑªÎ«Ó«Ã«È",  //Japanese
			L"¬ß¬Ö¬Ş¬ß¬à¬Ô¬à ¬â¬å¬ã¬ã¬Ü¬Ú¬Û",  //Russian
			L"?¥í¥á ¥ê¥ï¥ì¥ì?¥ó¥é ¥ó¥ç? ¥å¥ë¥ë¥ç¥í¥é¥ê??", //Greek
			L"?????? ?? ??? ????",  //Punjabi
			L"??? ?? ????? ",  //Persian
			L"???? ? ??? ???? ?????", //Telugu
			L"¬¯¬à ¬Ü¬Ñ¬Ü¬Ó¬à, ¬á¬à ¬Õ¬ñ¬Ó¬à¬İ¬Ú¬ä¬Ö, ¬Ö ¬ä¬à¬Ó¬Ñ?",  //Bulgarian
		};

		std::locale::global(std::locale(""));
		std::wcout.imbue(std::locale());

		for (size_t i = 0; i < 11; ++i)
			std::wcout << texts[i] << std::endl;
	}

	return 0;
}