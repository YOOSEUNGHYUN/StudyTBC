//Function Overloading
#include <iostream>
#include <string>
using namespace std;

typedef int my_int;

void print(unsigned int value) {}
void print(float value) {}

int main()
{
	print((unsigned int)'a');
	print(0u);
	print(3.14159f);

	return 0;
}
