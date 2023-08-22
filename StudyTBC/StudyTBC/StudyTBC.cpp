#include <iostream>
#include <vector>
#include <list>
#include <set>		// multiset도 set 안에 들어있다.
#include <map>		// multimap도 map 안에 들어있다.

//	  Iterators STL 반복자 소개
using namespace std;

int main()
{
	vector<int> container;
	for (int i = 0; i < 10; ++i)
		container.push_back(i);

	vector<int>::const_iterator itr;	// 반복자 자체를 변수로 만든다.
	itr = container.begin();			// return값이 iterator 
	while (itr != container.end())
	{
		cout << *itr << " ";

		++itr;
	}
	cout << endl;

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	return 0;
}