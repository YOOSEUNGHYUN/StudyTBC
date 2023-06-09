#include <iostream>
#include <string>
#include <vector>
//Destructor
using namespace std;

class IntArray
{
private: 
	int *m_arr = nullptr; // new, delete 하기 귀찮으면 vector 써라
						  // vector의 소멸자에는 메모리 반납하는게 들어있다.
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		//cout << "Constructor " << endl;
	}

	~IntArray()
	{
		if(m_arr != nullptr)
			delete[] m_arr;
	}

	int getLength() { return m_length; }
};


int main()
{
	while (true)
	{
		IntArray my_int_arr(10000);
	}
	// 죽었다 만들어졌다 할거임 => 메모리릭이 생긴다.

	return 0;
}