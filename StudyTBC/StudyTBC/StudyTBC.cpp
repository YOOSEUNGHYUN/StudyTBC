#include <iostream>
using namespace std;
//Recursive Function Call

void countDown(int count)
{
	cout << count << endl;

	if(count > 0)
		countDown(count - 1);
}

int main()
{
	countDown(5);

	return 0;
}
