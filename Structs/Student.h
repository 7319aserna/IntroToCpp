#pragma once

// Declaring a struct
struct student
{
	// The ID of the student.
	int studentID;
	// The course the student is currently in.
	int enrolledCourse;
	// The score from the students last exam.
	int lastExam;
};

/*
// Student Analytics)
struct averageTestScores
{
	int i;
	int sum = 0;

	int testScores[6]{};

	for (i = 0; i < 47; i++)
	{
		sum = sum + testScores[i];
	}
};

//void printStudent(student target);

*/

void printAvgTestScores(student list[], int size);
float median = median(student, 4);