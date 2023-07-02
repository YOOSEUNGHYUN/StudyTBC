#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name; // string은 char * data, unsigned length 가 묶여서 string으로 쓰고 있는 것.
	Position2D m_location;	// composition
							// m_x, m_y
	//int m_x;	// location
	//int m_y;

public:
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in), m_location(pos_in)
	{

	}

	void moveTo(const Position2D& pos_target)
	{
		m_location.set(pos_target);
		/*m_x = x_target;
		m_y = y_target;*/
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};