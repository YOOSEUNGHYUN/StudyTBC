#include <iostream>
//#include <array>
#include <vector>
using namespace std;

int main()
{
	//std::array<int, 5> array;

	int *my_arr = new int[5];

	std::vector<int> array;

	std::vector<int> array2 = { 1, 2, 3, 4, 5 };

	cout << array2.size() << endl;

	std::vector<int> array3 = { 1, 2, 3, };

	cout << array3.size() << endl;

	std::vector<int> array4 { 1, 2, 3, };

	cout << array4.size() << endl;

	vector<int> arr = { 1 ,2 ,3 ,4 , 5 };

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	delete[] my_arr;

	return 0;
}
