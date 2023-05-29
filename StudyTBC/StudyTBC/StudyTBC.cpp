#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//int *v_ptr = new int[3]{1, 2, 3};
	std::vector<int> v{ 1,2,3, 4,5 };

	// size, capacity

	v.resize(2);

	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;

	//cout << v.at(2) << endl;

	int *ptr = v.data();

	cout << ptr[2] << endl;

	return 0;
}
