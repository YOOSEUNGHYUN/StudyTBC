#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//int *v_ptr = new int[3]{1, 2, 3};
	std::vector<int> v{ 1,2,3, 4,5 };

	// size, capacity

	v.reserve(1024);

	for(unsigned int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;

	//cout << v.at(2) << endl;

	int *ptr = v.data();

	cout << ptr[2] << endl;

	return 0;
}
