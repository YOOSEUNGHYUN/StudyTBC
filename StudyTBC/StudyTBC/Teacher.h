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
		//this->getName(); Person class�� �ִ� ���� ������ �� �� ����.
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