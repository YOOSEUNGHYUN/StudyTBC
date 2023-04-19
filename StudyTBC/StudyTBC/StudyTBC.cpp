#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

enum Color //user-defined data types 사용자 정의 자료형
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

int main()
{
	int color_id = COLOR_RED;
	Color my_color = static_cast<Color>(3);

	//cin >> my_color;
	/*cout << color_id << endl;

	int in_number;
	cin >> in_number;*/
	string str_input;
	
	getline(cin, str_input);

	if (str_input == "COLOR_BLACK")
	{
		my_color = static_cast<Color>(0);
	}

	return 0;
}



