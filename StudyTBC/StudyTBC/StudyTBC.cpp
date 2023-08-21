#include <iostream>
#include <vector>
#include <deque>
#include <set>		// multiset�� set �ȿ� ����ִ�.
#include <map>		// multimap�� map �ȿ� ����ִ�.
#include <string>
#include <stack>
#include <queue>
//	Standard Template Libraries and Containers ǥ�� ���ø� ���̺귯���� �����̳� �Ұ�
//	http://en.cppreference.com/w/cpp/header

using namespace std;

void sequence_containers()
{
	//	vector	//	vector���� push_front�� ����.
	//{
	//	vector<int> vec;	//	#include <vector>
	//	for (int i = 0; i < 10; ++i)
	//		vec.push_back(i);

	//	for (auto& e : vec)
	//		cout << e << " ";
	//	cout << endl;
	//}

	//	deque	�ڷḦ �տ��� ���� �� �ְ� �ڿ��� ���� �� �ִ�.
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
	//	set			//	���Ұ� �ߺ����� �ʴ´�.
	//{
	//	set<string> str_set;

	//	str_set.insert("Hello");		//	set�� insert�� ����.
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

	////	map : key/value	(json ������ ���)
	//{
	//	std::map<char, int> map;
	//	map['a'] = 10;
	//	map['b'] = 20;
	//	map['c'] = 50;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;

	//	cout << map['a'] << endl;

	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";	// fist�� key, second�� value
	//	cout << endl;
	//}

	//	multimap : duplicated keys
	//{
	//	std::multimap<char, int> map;
	//	map.insert(std::pair<char, int>('a', 10));	//	Before c++ 14, pair<char, int>('a', 10)
	//	map.insert(std::pair<char, int>('b', 10));
	//	map.insert(std::pair<char, int>('c', 10));
	//	map.insert(std::pair<char, int>('a', 100));

	//	cout << map.count('a') << endl;	// �ش��ϴ� key�� ���Ұ� ��� ����ִ��� �����ִ� ���

	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";
	//	cout << endl;
	//}
}

void container_adapters()
{
	//	stack	������ �״� ��
	//{
	//	cout << "Stack" << endl;

	//	std::stack<int> stack;
	//	stack.push(1);		// push adds a copy  Ǫ���� �����ؼ� �ִ´�.
	//	stack.emplace(2);	// emplace constructs a new object  emplace�� ���ο� ��ü�� ���� ����ִ´�.
	//	stack.emplace(3);
	//	cout << stack.top() << endl;	// stack ���� ���� �ִ� ��
	//	stack.pop();					// ���� ���� �ִ� �� ����. �ʰ� �߰� �� ���� ���� pop �ȴ�.
	//	cout << stack.top() << endl;
	//}

	//	queue	// ���� �߰� �� ���� ���� pop �ȴ�.
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

	////	Priority queue	��� sorting ���ش�.
	//{
	//	cout << "Priority queue" << endl;

	//	std::priority_queue<int> queue;

	//	for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
	//		queue.push(n);

	//	for (int i = 0; i < 10; ++i)
	//	{
	//		cout << queue.top() << endl;
	//		queue.pop();	// �ϳ��� ���鼭 ���
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