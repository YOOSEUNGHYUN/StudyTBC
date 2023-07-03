#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher * teacher;
	std::vector<Student*> students; 
	// students 자체는 vector의 instance다. -> Lecture 클래스 인스턴스가 사라지면 students도 사라짐 
	// 하지만 Student 포인터가 가르키고 있는 원래 주소에 있는 것들은 그대로 유지된다.


public:
	Lecture(const std::string& name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		// do NOT delete teacher
		// do NOT delete students
	}

	void assignTeacher(Teacher * const teacher_input)
	{
		teacher = teacher_input;
	}


	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input); // 복사해서 넣어준다.
		// &student_input !=, &students[0] 주소가 다르다.
	}

	

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		// 레퍼런스로 받아오지 않으면 값이 업데이트 되지 않는다.
		//for (auto& element : students) // Note : 'auto element' doesn't work
		//	element.setIntel(element.getIntel() + 1);

		for (auto& element : students)	// Note: 'auto element' works
			(*element).setIntel((*element).getIntel() + 1);
		// element->setIntel(element->getIntel() + 1); 과 같다.
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;	// de-referencing 해줘야 한다.

		return out;

	}
};
