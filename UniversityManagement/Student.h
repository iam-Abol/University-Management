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
	bool DataStructureGPAUnder10;
	std::vector <double> mathScores;
	double mathGPA;
	bool mathGPAUnder10;
	std::vector <double> scienceScores;
	double scienceGPA;
	bool scienceGPAUnder10;
	std::vector <double> physicalEducationScores;
	double physicalEducationGPA;
	bool physicalEducationGPAUnder10;

public:
	Student();
	~Student();
	void printAllInformation();
};

