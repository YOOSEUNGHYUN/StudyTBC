#include <iostream>
#include <vector>
using namespace std;

typedef int* pint;

//void printElement(int (&arr)[4]) //대괄호 안에 element 개수 반드시 들어가야함
void printElement(const vector<int>& arr)
{

}

int main()
{
	/*int arr[]{ 1, 2, 3, 4 };*/
	vector<int> arr{ 1, 2, 3, 4 };

	printElement(arr);

	return 0;
}
