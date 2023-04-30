#include <iostream>
using namespace std;

#define NUM_STUDENTS 100000

int main()
{
	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students];

	cout << &students_scores << endl;
	cout << &students_scores[0] << endl;
	cout << &students_scores[1] << endl; 
	cout << &students_scores[2] << endl;
	cout << &students_scores[3] << endl;

	cout << sizeof(students_scores) << endl;

	return 0;
}