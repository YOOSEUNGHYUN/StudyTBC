#include <iostream>
#include <vector>
#include <list>
#include <set>		// multiset�� set �ȿ� ����ִ�.
#include <map>		// multimap�� map �ȿ� ����ִ�.

//	  Iterators STL �ݺ��� �Ұ�
using namespace std;

int main()
{
	list<int> container;
	for (int i = 0; i < 10; ++i)
		container.push_back(i);

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	return 0;
}