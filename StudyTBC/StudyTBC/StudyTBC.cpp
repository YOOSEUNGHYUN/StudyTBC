#include <iostream>
#include <vector>
#include <list>
#include <set>		// multiset�� set �ȿ� ����ִ�.
#include <map>		// multimap�� map �ȿ� ����ִ�.

//	  Iterators STL �ݺ��� �Ұ�
using namespace std;

int main()
{
	//	map�� tuple
	map<int, char> container;
	for (int i = 0; i < 10; ++i)
		container.insert(make_pair(i, char(i + 65))); 

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		//cout << *itr << " ";	// iterator�� ����Ű�°� pair��.
		cout << itr->first << " " << itr->second << endl;
	cout << endl;

	return 0;
}