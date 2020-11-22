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
	
	std::cout << "student code : " << studentCode << std::endl;
	std::cout << "name : " << name << std::endl;
	std::cout << "last name : " << lastName << std::endl;
	std::cout << "national code : " << nationalCode << std::endl;
	std::cout << "phone number : " << phoneNumber << std::endl;
	for (int  i = 0; i < lessons.size(); i++)
	{
		lessons[i].printScores();
	}
	

}
// getter and setters
int Student::getStudentCode(){ return studentCode; }
void Student::setStudentCode(int number){ studentCode = number; }
std::string Student::getName(){ return name; }
void Student::setName(std::string name){ this->name = name; }
std::string Student::getLastName(){ return lastName; }
void Student::setLastName(std::string lastName){ this->lastName = lastName; }
std::string Student::getNationalCode(){ return nationalCode; }
void Student::setNationalCode(std::string nationalCode){ this->nationalCode = nationalCode; }