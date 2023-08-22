#include <iostream>
#include <vector>
#include <list>
#include <set>		// multiset도 set 안에 들어있다.
#include <map>		// multimap도 map 안에 들어있다.

//	  Iterators STL 반복자 소개
using namespace std;

int main()
{
	set<int> container;
	for (int i = 0; i < 10; ++i)
		container.insert(i);	//	set은 데이터를 넣을 때 insert로 넣는다.

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	return 0;
}