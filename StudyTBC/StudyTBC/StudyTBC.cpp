#include <iostream>		
#include <thread>
#include <atomic>	// �ɰ� �� ���ٴ� �ǹ�
					//	operation�� �о���� ���� �ٲٰ� ���� ���� ���ܰ踦 �ѹ��� ��ġ�쵵�� ���� ����
#include <chrono>
#include <mutex>	// mutual exclusion (��ȣ����) �̰� ���� ������ �� �־��� ����
using namespace std;

//	Race Condition, std::atomic, std::scoped_lock ���̽� �����

mutex mtx;

int main()
{
	int shared_memory(0);

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i)
		{
			this_thread::sleep_for(chrono::microseconds(1));

			//mtx.lock();	// lock �ɾ����� �ݵ�� unlock �ɾ������.

			//std::lock_guard lock(mtx);
			std::scoped_lock lock(mtx);

			shared_memory++;	//	++�� atomic<int>�� ���� �����ڰ� overloading ���ִ°�. 
								//	���ǰ� ���� �Ǿ�����
			//shared_memory.fetch_add(1);	//	�׳� int�� ���ϱ� ���� ���ٴ� �ӵ��� ���� ������.
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