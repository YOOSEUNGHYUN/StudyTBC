#include <iostream>		
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>
using namespace std;

//	std::thread�� ��Ƽ������ multithreading �� ����

int main()
{
	/*cout << std::thread::hardware_concurrency() << endl;
	cout << std::this_thread::get_id() << endl;*/

	const int num_pro = std::thread::hardware_concurrency();

	cout << std::this_thread::get_id() << endl;

	vector<std::thread> my_threads;
	my_threads.resize(num_pro);

	for (auto& e : my_threads)
		e = std::thread([]() {
					cout << std::this_thread::get_id() << endl;
					while (true) {}});
	for (auto& e : my_threads)
		e.join();


	//std::thread t1 = std::thread([]() {
	//	cout << std::this_thread::get_id() << endl; 
	//	while (true) {}});

	//std::thread t2 = std::thread([]() {
	//	cout << std::this_thread::get_id() << endl;
	//	while (true) {}});

	//std::thread t3 = std::thread([]() {
	//	cout << std::this_thread::get_id() << endl;
	//	while (true) {}});

	//std::thread t4 = std::thread([]() {
	//	cout << std::this_thread::get_id() << endl;
	//	while (true) {}});

	//t1.join();	//	t1�� ���� �� ���� ��ٸ���.
	//t2.join();
	//t3.join();
	//t4.join();
}