#include <iostream>
#include <vector> // sorting 하는 시간을 재기 위해서 vector include함.
#include <algorithm> // sort 알고리즘
#include <random>
#include <chrono>	// 시간 재주는 라이브러리
using namespace std;
// measure execution time
// 실제 시간을 잴 때에는 release 모드로 재야 한다. debug 로 하면 안돼

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};

int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() };

	vector<int> vec(1000000);
	/*for (unsigned int i = 0; i < vec.size(); ++i)
		vec[i] = i;*/

	std::shuffle(begin(vec), end(vec), mersenne_engine);

	for (auto& e : vec) cout << e << " ";
	cout << endl;

	Timer timer;

	std::sort(begin(vec), end(vec));

	timer.elapsed();

	/*for (auto& e : vec) cout << e << " ";
	cout << endl;*/

	return 0;
}