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

std::vector<double> Lesson::getScores(){
	return scores;
}

void Lesson::setScores(std::vector<double> scores){
	double score;
	for (int i = 0; i < scores.size(); i++){
		
		this->scores.push_back(scores[i]);
	}
}