#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Lesson.h"
class Student
{
private:
	int studentCode;
	
	std::string name;
	std::string lastName;
	std::string nationalCode;
	std::string phoneNumber;
	std::vector <Lesson> lessons;
	/*std::vector <double> dataStructureScores;
	double dataStructureGPA;
	bool DataStructureGPAUnder10;
	std::vector <double> mathScores;
	double mathGPA;
	bool mathGPAUnder10;
	std::vector <double> scienceScores;
	double scienceGPA;
	bool scienceGPAUnder10;
	std::vector <double> physicalEducationScores;
	double physicalEducationGPA;
	bool physicalEducationGPAUnder10;*/

public:
	int getStudentCode();
	void setStudentCode(int number);
	std::string getName();
	Student();
	~Student();
	void printAllInformation();
};

