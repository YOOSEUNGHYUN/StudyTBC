#include <iostream>
#include <limits>

using namespace std;

int main()
{
	char c1(72);
	char c2(89);
	char c3(79);
	char c4(78);
	char c5(73);
	int ic1(72);
	int ic2(69);
	int ic3(76);
	int ic4(76);
	int ic5(79);

	cin >> ic1;
	cin >> ic2;
	cin >> ic3;
	cin >> ic4;
	cin >> ic5;
	
	cout << static_cast<char>(ic1) 
		<< static_cast<char>(ic2) 
		<< static_cast<char>(ic3) 
		<< static_cast<char>(ic4) 
		<< static_cast<char>(ic5) << endl;

	cout << c1 << c2 << c3 << c4 << c5 << endl;

	return 0;
}

