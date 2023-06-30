#include <iostream>
#include <cassert>
// Overloading assignment operator, Deep copy vs Shallow copy 
using namespace std;

std::string;

class MyString
{
//private:
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	//MyString(const MyString &source) = delete; 이렇게 막는 방법도 있다.

	MyString(const MyString& source)
	{
		cout << "Copy constructor " << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString& source)
	{
		// shallow copy
		/*this->m_data = source.m_data;
		this->m_length = source.m_length;*/

		cout << "Assignment operator " << endl;

		if (this == &source) // precent self-assignment 대입연산자는 자기 자신을 대입할 수 있다.
			return *this;	 // 이 경우 못하게 막아버리고 return 해서 끝낸다.

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }

};

int main()
{
	MyString hello("Hello");

	MyString str1 = hello;	// 여기에 assignment operator가 있지만 Copy Constructor가 호출된다.
	//MyString str1(hello); 와 같다.

	MyString str2;
	str2 = hello;	// 그냥 대입만 할 때에는 assignment operator가 호출된다.

	//cout << (int*)hello.m_data << endl;
	//cout << hello.getString() << endl;

	//{
	//	MyString copy = hello;	// 복사 생성자로 호출된다. 대입 연산자 아니다.
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}	// copy는 scope를 벗어나면 사라진다.
	//	// 여기를 벗어나면서 delete에서 지운다.
	//
	//cout << hello.getString() << endl;

	return 0;
}