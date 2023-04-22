#include <iostream>

using namespace std;

int main()
{
	cout << "While-loop test" << endl;

	int count = 10;

	while (count >= 0)
	{
		if (count == 0)
			cout << "zero";
		else
			cout << count << " ";
		
		count--;
	}

}


