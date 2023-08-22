#include <iostream>
#include <vector>
#include <list>
#include <set>		// multiset도 set 안에 들어있다.
#include <map>		// multimap도 map 안에 들어있다.

//	  Iterators STL 반복자 소개
using namespace std;

int main()
{
	//	map은 tuple
	map<int, char> container;
	for (int i = 0; i < 10; ++i)
		container.insert(make_pair(i, char(i + 65))); 

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		//cout << *itr << " ";	// iterator가 가르키는게 pair다.
		cout << itr->first << " " << itr->second << endl;
	cout << endl;

	return 0;
}