#include <iostream>
#include <vector>
using namespace std;

typedef int* pint;

//void printElement(int (&arr)[4]) //���ȣ �ȿ� element ���� �ݵ�� ������
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
