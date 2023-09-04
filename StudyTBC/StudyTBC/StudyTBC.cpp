#include <iostream>		
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>	// mutual exclusion (상호배제) 이거 내꺼 나만쓸 수 있어라고 선언
using namespace std;

//	std::thread와 멀티쓰레딩 multithreading 의 기초

mutex mtx;

int main()
{
	auto work_func = [](const string& name)
	{
		for (int i = 0; i < 5; ++i)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));

			mtx.lock();
			cout << name << " " << std::this_thread::get_id() << " is working " << i << endl;
			mtx.unlock();
		}
	};

	std::thread t1 = std::thread(work_func, "Hyoni");
	std::thread t2 = std::thread(work_func, "Dash");
	
	t1.join();
	t2.join();

	return 0;
}