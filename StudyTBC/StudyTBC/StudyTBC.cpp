#include <iostream>
#include <vector>
//	Container Classes

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
	//	Constructors
	IntArray(const int& length_in)
		: m_length(length_in)
	{
		m_data = new int[m_length];
	}

	IntArray(const std::initializer_list<int>& list)
		:IntArray(list.size())
	{
		int count = 0;
		for (auto& e : list)
		{
			m_data[count] = e;
			count++;
		}
	}

	IntArray& resize(const int& length_in)
	{
		if (m_length == length_in)
			return *this;
		else if (m_length < length_in) // 길이가 길어진 경우, 뒤에 0 붙임
		{
			int* temp = new int[length_in];
			for (int i = 0; i < m_length; i++)
				temp[i] = m_data[i];
			for (int i = m_length; i < length_in; i++)
				temp[i] = 0;

			m_length = length_in;
			delete[] m_data;
			m_data = temp;
		}
		else
		{
			m_length = length_in;
			int* temp = new int[m_length];
			for (int i = 0; i < m_length; i++)
				temp[i] = m_data[i];

			delete[] m_data;
			m_data = temp;
		}

		return *this;
	}

	IntArray& insertBefore(const int& val, const int& idx)	//10 1
	{
		// 1 3 5 7 9
		// 1 3 5 7 9 0
		// 1 10 3 5 7 9
		resize(m_length + 1);

		// input index 이전 : 변화 없음
		// input index 이후
		for (int i = m_length - 1; i > idx; i--)
		{
			m_data[i] = m_data[i - 1];
		}

		// input index 값
		m_data[idx] = val;

		return *this;
	}

	IntArray& remove(const int& idx) //3
	{
		// 1 10 3 5 7 9
		// 1 10 3 7 9

		// concept : index 해당 element로 하나씩 앞으로 당기고, resize (m_length-1);
		for (int i = idx; i < m_length - 1; i++)
			m_data[i] = m_data[i + 1];
		resize(m_length - 1);

		return *this;
	}

	IntArray& push_back(const int& val)
	{
		resize(m_length + 1);
		m_data[m_length - 1] = val;
		return *this;
	}

	IntArray& operator =(const IntArray& intArray)
	{
		if (this == &intArray)
		{
			return *this;
		}

		delete[] m_data;

		m_length = intArray.m_length;

		if (intArray.m_data != nullptr)
		{
			m_data = new int[m_length];

			for (int i = 0; i < m_length; i++)
				m_data[i] = intArray.m_data[i];

		}
		else
			m_data = nullptr;

	}

	friend ostream& operator <<(ostream& out, const IntArray& int_arr)
	{
		for (int i = 0; i < int_arr.m_length; i++)
			out << int_arr.m_data[i] << " ";

		return out;
	}

	~IntArray()
	{
		delete[] m_data;
	}


};

int main()
{
	IntArray my_arr{ 1, 3, 5, 7, 9 };
	cout << my_arr << endl;

	my_arr.insertBefore(10, 1);			// 1, 10, 3, 5, 7, 9	 숫자 10을 index[1] 앞에다가 집어넣는다.
	cout << my_arr << endl;

	my_arr.remove(3);						// 1, 10, 3, 7, 9		 index[3]에 있는 숫자 제거, 7, 9를 끌어온다.
	cout << my_arr << endl;
	
	my_arr.push_back(13);					// 1, 10 ,3, 7, 9, 13
	cout << my_arr << endl;

	
	return 0;
}