#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
private:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}

	//AutoPtr(const AutoPtr& a)
	//{
	//	std::cout << "Auto copy constructor " << std::endl;

	//	//	deep copy 느려진다
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr; // Resource class에 copy assignment operator 호출한 부분
	//}

	//AutoPtr& operator=(const AutoPtr& a)
	//{
	//	std::cout << "AutoPtr copy assignment " << std::endl;

	//	if (&a == this)		//	prevent self-assignment
	//		return *this;

	//	if (m_ptr != nullptr) delete m_ptr;

	//	// deep copy
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;

	//	return *this;
	//}

	AutoPtr(const AutoPtr& a) = delete;
	AutoPtr& operator=(const AutoPtr& a) = delete;

	AutoPtr(AutoPtr&& a)
		:	m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;	//	really necessary?

		std::cout << "AutoPtr move constructor " << std::endl;
	}

	AutoPtr& operator=(AutoPtr&& a)
	{
		std::cout << "AutoPtr move assignment " << std::endl;

		if (&a == this)	//	prevent self-assignmnet
			return *this;

		if (!m_ptr) delete m_ptr;

		//	shallow copy
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;	

		return *this;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
};