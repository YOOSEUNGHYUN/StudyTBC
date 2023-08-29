#include <iostream>		
#include <regex>	//	regular expressions
using namespace std;

//	regular expressions 정규 표현식

int main()
{
	regex re("\\d");	// \\d 숫자인지 판별
	//regex re("\\d+");	// +를 붙이면 한개 이상의 글자 입력받을 수 있음
	//regex re("\\d*");	// *을 붙이면 입력을 안받아도 괜찮다는 의미 
	//regex re("[ab]");	//	a와 b만 괜찮다.
	
	//	\d 와 [:digit:] 는 같다, a decimal digit character
	//  바깥쪽 대괄호는 대괄호 안에 있는 것들에 해당하는 문자는 ok라는 의미
	
	
	//regex re("[[:digit:]]{3}");	//	digit을 3개를 딱 맞춰서 입력받는다.
									//	0,1,2,3,4,5,6,7,8,9 중에
	//regex re("[A-Z]+");			// 알파벳으로 입력받고 개수는 1개 이상이면 상관없다.
	//regex re("[A-Z]{3}");
	//regex re("[A-Z]{1,5}");		//	최소 한개, 최대 다섯개
	//regex re("([0-9]{1})([-]?)([0-9]{1,4})"); //	([-]?) -가 있어도 되고 없어도 된다는 의미

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))	// 위에서 입력한 규칙에 string이 맞는지 판별해준다.
			cout << "Match" << endl;
		else
			cout << "No match" << endl;

		//	print matches
		{
			//	sregex_iterator를 이용해서 match하는 부분만 출력
			auto begin = std::sregex_iterator(str.begin(), str.end(), re);
			auto end = std::sregex_iterator();
			for (auto itr = begin; itr != end; ++itr)
			{
				std::smatch match = *itr;
				cout << match.str() << " ";
			}
			cout << endl;
		}

		cout << endl;
	}

	return 0;
}