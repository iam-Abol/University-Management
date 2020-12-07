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
	std::string str;
	std::fstream read(path);
	while (read)
	{
		read >> str;
		temp.setStudentCode(std::stoi(str));
		read >> str;
		temp.setName(str);
	}

}