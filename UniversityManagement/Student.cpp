#include "stdafx.h"
#include "Student.h"


Student::Student()
{
}


Student::~Student()
{
}

void Student::printAllInformation(){
	"""print all student information and all student grades in each lesson and GPA of each lesson""";
	// student information :
	std::cout << "student code : " << studentCode << std::endl;
	std::cout << "name : " << name << std::endl;
	std::cout << "last name : " << lastName << std::endl;
	std::cout << "national code : " << nationalCode << std::endl;
	std::cout << "phone number : " << phoneNumber << std::endl;

	// scores :

	std::cout << "data structures scores : " << std::endl;
	for (int i = 0; i < dataStructureScores.size(); i++){
		std::cout << dataStructureScores[i] << "\t";
	}
	std::cout << "\nGPA of data structures : " << dataStructureGPA <<" ";
	if (DataStructureGPAUnder10 == true)
		std::cout << "pass" << std::endl;
	else
		std::cout << "fail" << std::endl;

	/////////////////////////////////////

	std::cout << "math scores : " << std::endl;
	for (int i = 0; i < mathScores.size(); i++){
		std::cout << mathScores[i] << "\t";
	}
	std::cout << "\nGPA of math : " << mathGPA << " ";
	if (mathGPAUnder10 == true)
		std::cout << "pass" << std::endl;
	else
		std::cout << "fail" << std::endl;

	/////////////////////////////////////

	std::cout << "science scores : " << std::endl;
	for (int i = 0; i < scienceScores.size(); i++){
		std::cout << scienceScores[i] << "\t";
	}
	std::cout << "\nGPA of science : " << scienceGPA << " ";
	if (scienceGPAUnder10 == true)
		std::cout << "pass" << std::endl;
	else
		std::cout << "fail" << std::endl;

	/////////////////////////////////////

	std::cout << "physical Education scores : " << std::endl;
	for (int i = 0; i < physicalEducationScores.size(); i++){
		std::cout << physicalEducationScores[i] << "\t";
	}
	std::cout << "\nGPA of physical Education : " << physicalEducationGPA << " ";
	if (physicalEducationGPAUnder10 == true)
		std::cout << "pass" << std::endl;
	else
		std::cout << "fail" << std::endl;

}