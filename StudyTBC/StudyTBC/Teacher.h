#pragma once

//#include <string>
#include "Person.h"

class Teacher : public Person
{
private:
	

public:
	Teacher(const std::string& name_in = "No Name")
		: Person(name_in)
	{
		//this->getName(); Person class에 있는 것을 가져다 쓸 수 있음.
	}

	void teach()
	{
		std::cout << getName() << " is teaching " << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		//out << teacher.m_name;
		out << teacher.getName();

		return out;
	}
};