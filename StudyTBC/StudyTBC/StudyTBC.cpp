#include <iostream>
#include <vector>
#include <deque>
#include <set>		// multiset도 set 안에 들어있다.
#include <map>		// multimap도 map 안에 들어있다.
#include <string>
#include <stack>
#include <queue>
//	Standard Template Libraries and Containers 표준 템플릿 라이브러리와 컨테이너 소개
//	http://en.cppreference.com/w/cpp/header

using namespace std;

void sequence_containers()
{
	//	vector	//	vector에는 push_front가 없다.
	//{
	//	vector<int> vec;	//	#include <vector>
	//	for (int i = 0; i < 10; ++i)
	//		vec.push_back(i);

	//	for (auto& e : vec)
	//		cout << e << " ";
	//	cout << endl;
	//}

	//	deque	자료를 앞에도 넣을 수 있고 뒤에도 넣을 수 있다.
	//{
	//	std::deque<int> deq;	//	#include <deque>
	//	for (int i = 0; i < 10; ++i)
	//	{
	//		deq.push_back(i);
	//		deq.push_front(i);
	//	}

	//	for (auto & e : deq)
	//		cout << e << " ";
	//	cout << endl;
	//	//	9 8 7 6 5 4 3 2 1 0 0 1 2 3 4 5 6 7 8 9 
	//}
}

void associative_containers()
{
	//	set			//	원소가 중복되지 않는다.
	//{
	//	set<string> str_set;

	//	str_set.insert("Hello");		//	set은 insert를 쓴다.
	//	str_set.insert("World");
	//	str_set.insert("Hello");

	//	cout << str_set.size() << endl;

	//	for (auto& e : str_set)
	//		cout << e << " ";
	//	cout << endl;
	//}

	//	multiset	: duplication is allowed
	//{
	//	std::multiset<string> str_set;

	//	str_set.insert("Hello");
	//	str_set.insert("World");
	//	str_set.insert("Hello");

	//	cout << str_set.size() << endl;

	//	for (auto& e : str_set)
	//		cout << e << " ";
	//	cout << endl;
	//}

	////	map : key/value	(json 구조와 비슷)
	//{
	//	std::map<char, int> map;
	//	map['a'] = 10;
	//	map['b'] = 20;
	//	map['c'] = 50;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;

	//	cout << map['a'] << endl;

	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";	// fist가 key, second가 value
	//	cout << endl;
	//}

	//	multimap : duplicated keys
	//{
	//	std::multimap<char, int> map;
	//	map.insert(std::pair<char, int>('a', 10));	//	Before c++ 14, pair<char, int>('a', 10)
	//	map.insert(std::pair<char, int>('b', 10));
	//	map.insert(std::pair<char, int>('c', 10));
	//	map.insert(std::pair<char, int>('a', 100));

	//	cout << map.count('a') << endl;	// 해당하는 key에 원소가 몇개가 들어있는지 세어주는 기능

	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";
	//	cout << endl;
	//}
}

void container_adapters()
{
	//	stack	층층이 쌓는 것
	//{
	//	cout << "Stack" << endl;

	//	std::stack<int> stack;
	//	stack.push(1);		// push adds a copy  푸쉬는 복사해서 넣는다.
	//	stack.emplace(2);	// emplace constructs a new object  emplace는 새로운 객체를 만들어서 집어넣는다.
	//	stack.emplace(3);
	//	cout << stack.top() << endl;	// stack 가장 위에 있는 것
	//	stack.pop();					// 가장 위에 있는 것 제거. 늦게 추가 된 것이 먼저 pop 된다.
	//	cout << stack.top() << endl;
	//}

	//	queue	// 먼저 추가 된 것이 먼저 pop 된다.
	/*{
		cout << "Queue" << endl;

		std::queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);
		cout << queue.front() << " " << queue.back() << endl;
		queue.pop();
		cout << queue.front() << " " << queue.back() << endl;
	}*/

	////	Priority queue	얘는 sorting 해준다.
	//{
	//	cout << "Priority queue" << endl;

	//	std::priority_queue<int> queue;

	//	for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
	//		queue.push(n);

	//	for (int i = 0; i < 10; ++i)
	//	{
	//		cout << queue.top() << endl;
	//		queue.pop();	// 하나씩 빼면서 출력
	//	}
	//}
}

int main()
{
	//sequence_containers();

	//associative_containers();

	//container_adapters();

	return 0;
}