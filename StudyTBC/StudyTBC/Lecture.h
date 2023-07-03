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
	// students ��ü�� vector�� instance��. -> Lecture Ŭ���� �ν��Ͻ��� ������� students�� ����� 
	// ������ Student �����Ͱ� ����Ű�� �ִ� ���� �ּҿ� �ִ� �͵��� �״�� �����ȴ�.


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
		students.push_back(student_input); // �����ؼ� �־��ش�.
		// &student_input !=, &students[0] �ּҰ� �ٸ���.
	}

	

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		// ���۷����� �޾ƿ��� ������ ���� ������Ʈ ���� �ʴ´�.
		//for (auto& element : students) // Note : 'auto element' doesn't work
		//	element.setIntel(element.getIntel() + 1);

		for (auto& element : students)	// Note: 'auto element' works
			(*element).setIntel((*element).getIntel() + 1);
		// element->setIntel(element->getIntel() + 1); �� ����.
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;	// de-referencing ����� �Ѵ�.

		return out;

	}
};
