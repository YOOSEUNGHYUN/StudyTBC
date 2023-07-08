#pragma once
#include <iostream>
#include <string>

class Person
{
private:
	std::string m_name;

public:
	/*Person()
		: m_name("No Name")
	{}*/

	Person(const std::string& name_in = "No Name")
		: m_name(name_in)
	{}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}
};