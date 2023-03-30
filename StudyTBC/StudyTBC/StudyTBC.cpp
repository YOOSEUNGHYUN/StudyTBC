#include <iostream>
using namespace std;

int main()
{
	int x = 2; //x is a variable, 2 is a literal.

	int y = (x > 0) ? 1 : 2; //삼항연산자는 왼쪽이 true 오른쪽이 false

	cout << y << endl;

	return 0;
}