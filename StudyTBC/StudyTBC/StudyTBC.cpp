#include <iostream>
#include <cassert>
// Overloading parenthesis operator and Function object(Functor)
using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) { return (m_counter += i); }
};

int main()
{
	Accumulator acc;
	cout << acc(10) << endl;
	cout << acc(20) << endl;
}