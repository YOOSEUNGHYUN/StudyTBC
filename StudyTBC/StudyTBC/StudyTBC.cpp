#include <iostream>		
#include <regex>	//	regular expressions
using namespace std;

//	regular expressions ���� ǥ����

int main()
{
	regex re("\\d");	// \\d �������� �Ǻ�
	//regex re("\\d+");	// +�� ���̸� �Ѱ� �̻��� ���� �Է¹��� �� ����
	//regex re("\\d*");	// *�� ���̸� �Է��� �ȹ޾Ƶ� �����ٴ� �ǹ� 
	//regex re("[ab]");	//	a�� b�� ������.
	
	//	\d �� [:digit:] �� ����, a decimal digit character
	//  �ٱ��� ���ȣ�� ���ȣ �ȿ� �ִ� �͵鿡 �ش��ϴ� ���ڴ� ok��� �ǹ�
	
	
	//regex re("[[:digit:]]{3}");	//	digit�� 3���� �� ���缭 �Է¹޴´�.
									//	0,1,2,3,4,5,6,7,8,9 �߿�
	//regex re("[A-Z]+");			// ���ĺ����� �Է¹ް� ������ 1�� �̻��̸� �������.
	//regex re("[A-Z]{3}");
	//regex re("[A-Z]{1,5}");		//	�ּ� �Ѱ�, �ִ� �ټ���
	//regex re("([0-9]{1})([-]?)([0-9]{1,4})"); //	([-]?) -�� �־ �ǰ� ��� �ȴٴ� �ǹ�

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))	// ������ �Է��� ��Ģ�� string�� �´��� �Ǻ����ش�.
			cout << "Match" << endl;
		else
			cout << "No match" << endl;

		//	print matches
		{
			//	sregex_iterator�� �̿��ؼ� match�ϴ� �κи� ���
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