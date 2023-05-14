#include <iostream>
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	const int fibo[] = { 0, 1, 1, 2, 3, 5, 8 , 13, 21, 34, 55, 89 };

		for (int number : fibo)
			number = 10;

			for (int number : fibo)
				cout << number << " ";
	cout << endl;


	return 0;
}
