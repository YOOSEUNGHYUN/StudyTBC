#include <iostream>

using namespace std;

int main()
{
	cout << "While-loop test" << endl;

	int outer_count=1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}
	return 0;
}


