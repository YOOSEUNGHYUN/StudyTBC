#include <iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	int scores[] = { 84, 92, 76, 81, 56 };

	const int num_students = sizeof(scores) / sizeof(int);

	int total_score = 0;

	for (int i = 0; i < num_students; ++i)
	{
		total_score = scores[i];
	}

	double avg_score = static_cast<double>(total_score) / num_students;

	/*int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;

	int total_score = score0 + score1 + score2 + score3 + score4;*/

	//double avg_score = static_cast<double>(total_score) / num_students;
	//Note: double(total_score) / num_students != double(total_score / num_students);

	return 0;
}
