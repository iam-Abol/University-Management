#include "stdafx.h"
#include "FileManagement.h"
#include "Student.h"
#include <fstream>
#include <string>
FileManagement::FileManagement()
{
}


FileManagement::~FileManagement()
{
}
//void FileManagement::setFileName(const std::string& fileName){
//	this->fileName = fileName;
//}
void FileManagement::Read(std::vector <Student>& students,std::string path){
	"""this function should read everything from file and when it finished reading the scores it should find the GPA """;
	Student temp;
	std::string line;
	std::fstream read(path);
	read >> line;
	int numberOfStudents = std::stoi(line);
	read >> line;
	int numberOfLessons = std::stoi(line);
	for (int i = 0; i < numberOfStudents; i++)
	{
		read >> line;
		temp.setStudentCode(std::stoi(line));
		read >> line;
		temp.setName(line);
		read >> line;
		temp.setLastName(line);
		read >> line;
		temp.setNationalCode(line);
		read >> line;
		temp.setPhoneNumber(line);
		for (int j = 0; j < numberOfLessons; j++)
		{
			read >> line;
			Lesson lesson;
			lesson.setName(line);
			std::getline(read, line);
			lesson.setScores(line);
			temp.pushLesson(lesson);
		}
		students.push_back(temp);
		temp = Student();
	}
	

}

void FileManagement::write(std::vector <Student>& students){
	std::string line;
	std::string allLinesForAdding="";
	line = std::to_string(students.size());// number of students
	allLinesForAdding += line + " ";
	line = std::to_string(students[0].getLessons().size());//number of lessons of each student
	allLinesForAdding += line + "\n";
	for (int i = 0; i < students.size(); i++){
		allLinesForAdding += std::to_string(students[i].getStudentCode()) + "\n";
		allLinesForAdding += students[i].getName() + "\n";
		allLinesForAdding += students[i].getLastName() + "\n";
		allLinesForAdding += students[i].getNationalCode() + "\n";
		allLinesForAdding += students[i].getPhoneNumber() + "\n";
		for (int j = 0; j < students[i].getLessons().size(); j++){
			allLinesForAdding += students[i].getLessons()[j].getName() + " " + students[i].getLessons()[j].getScoresAsAString() + "\n";
		}
	}
	std::fstream write("student.txt");

	write << allLinesForAdding;
}