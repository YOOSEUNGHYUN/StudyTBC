#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
// Overloading Comparing Operator
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	// std sort 쓸 때는 왼쪽이 오른쪽보다 더 작냐라고 비교해야한다.
	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;
	
	//	C++ 17 에서 std::random_shuffle은 폐기됨.
	//	std::shuffle을 사용하면 된다.
	//	#include <random>
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(arr.begin(), arr.end(), g);

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}