#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	cout << "Your age ? : ";
	int age;
	cin >> age;
	//std::getline(std::cin, age);

	//cin.ignore(32767, '\n');
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);

	cout << "Name is : " << name << endl;
	cout << "Age is : " << age << endl;

	return 0;
}


