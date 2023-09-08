#include <iostream>		
#include <thread>
#include <atomic>	// 쪼갤 수 없다는 의미
					//	operation이 읽어오고 값을 바꾸고 갖고 가는 세단계를 한번에 해치우도록 묶은 변수
#include <chrono>
#include <mutex>	// mutual exclusion (상호배제) 이거 내꺼 나만쓸 수 있어라고 선언
using namespace std;

//	Race Condition, std::atomic, std::scoped_lock 레이스 컨디션

mutex mtx;

int main()
{
	int shared_memory(0);

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i)
		{
			this_thread::sleep_for(chrono::microseconds(1));

			//mtx.lock();	// lock 걸었으면 반드시 unlock 걸어줘야함.

			//std::lock_guard lock(mtx);
			std::scoped_lock lock(mtx);

			shared_memory++;	//	++은 atomic<int>의 증감 연산자가 overloading 되있는거. 
								//	정의가 따로 되어있음
			//shared_memory.fetch_add(1);	//	그냥 int의 더하기 빼기 보다는 속도가 조금 느리다.
			//mtx.unlock();
		}
	};

	thread t1 = thread(count_func);
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}