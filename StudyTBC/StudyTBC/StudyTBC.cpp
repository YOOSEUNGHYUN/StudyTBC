#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';

		cout << endl;
	}

	cout << endl;

	return 0;
}