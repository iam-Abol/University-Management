#pragma once
#include <iostream>
#include <string>
#include <vector>
class Student
{
private:
	int studentCode;
	std::string name;
	std::string lastName;
	std::string nationalCode;
	std::string phoneNumber;
	std::vector <double> dataStructureScores;
	double dataStructureGPA;
	bool DataStructureScoreUnder10;
	std::vector <double> mathScores;
	double mathGPA;
	bool mathScoreUnder10;
	std::vector <double> scienceScores;
	double scienceGPA;
	bool scienceScoreUnder10;
	std::vector <double> physicalEducationScores;
	double physicalEducationGPA;
	bool physicalEducationScoreUnder10;
public:
	Student();
	~Student();
};

