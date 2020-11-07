#include "stdafx.h"
#include "Lesson.h"
#include <iostream>
#include <string>

Lesson::Lesson()
{
}


Lesson::~Lesson()
{
}

std::string Lesson::getName(){
	return name;
}

void Lesson::setName(std::string name){
	this->name = name;
}