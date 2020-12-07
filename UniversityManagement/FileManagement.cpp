#include "stdafx.h"
#include "FileManagement.h"
#include "Student.h"
#include <fstream>
FileManagement::FileManagement()
{
}


FileManagement::~FileManagement()
{
}
void FileManagement::setFileName(const std::string& fileName){
	this->fileName = fileName;
}
void FileManagement::Read(std::vector <Student>& students){
	"""this function should read everything from file and when it finished reading the scores it should find the GPA """;
	Student temp;
	

}