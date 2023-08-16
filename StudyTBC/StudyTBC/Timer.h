#pragma once
#include <vector> // sorting 하는 시간을 재기 위해서 vector include함.
#include <algorithm> // sort 알고리즘
#include <random>
#include <chrono>	// 시간 재주는 라이브러리

using namespace std;

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