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
int Student::getStudentCode(){ return studentCode; }