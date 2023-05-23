#include <iostream>
using namespace std;

//int* getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}

int* allocateMemory(int size)
{
	return new int[size];
}

int main()
{
	int* array = allocateMemory(1024);

	delete[] array;

	return 0;
}
