#include <iostream>
using namespace std;
//Recursive Function Call
// 0 1 2 3 5 8 13 21 ... fibonacci

int fibonacci(int fibo)
{
	if (fibo <= 0)
		return 0;
	else if (fibo == 1) return 1;
	else
	{
		return fibonacci(fibo - 2) + fibonacci(fibo - 1);
	}
}

void printFibonacci(int (*fibonacci)(int), int n)
{
	for (int k = 0; k < n; k++)
	{
		cout << fibonacci(k) << " ";
	}
	cout << endl;
}
int main()
{
	printFibonacci(fibonacci, 10);

	return 0;
}
