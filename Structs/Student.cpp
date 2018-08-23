#include <iostream>

#include "Student.h"

/*

// Passing structs
void printStudent(student target)
{
	std::cout << "Student ID: " << target.studentID << std::endl;
	std::cout << "Enrolled Course: " << target.enrolledCourse << std::endl;
	std::cout << "Last Exam: " << target.lastExam << std::endl;
}

*/

void printAvgTestScores(student list[], int size)
{
	float sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum+= list[i].lastExam;
	}
	float average = sum / size;
	std::cout << "Average: " << average;
}

float medianScore(student list[], int size);

int getEnrolledStudentCount(student list[], int size);

float medianScore(student list[], int size)
{
	// Sort the data
	bool swapped = false;

	do
	{
		swapped = false;

		for (int i = 0; i < size - 1; i++)
		{
			// compare the two values
			if (list[i].lastExam > list[i].lastExam)
			{
				student temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;

				swapped = true;
			}
		}
	} while (swapped == true);

	// return the medium (avg if even)
	if ((size % 2) == 0)
	{
		int sum = list[size / 2].lastExam + list[size / 2 - 1].lastExam;
		return sum / 2.0f;
	}
	else
	{
		return list[size / 2].lastExam;
	}
}