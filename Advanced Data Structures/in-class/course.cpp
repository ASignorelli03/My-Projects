#include "course.h"
Course::Course() : Course("",25)
{
	
}
Course::Course(std::string instructor,int numStudents) 
{
	numStudents_= numStudents;
	instructor_=instructor;
	students_=new Student[numStudents];
	//populateCourse();
}
Course::~Course()
{
	delete [] students_;
}

void Course::populateCourse()
{
	for(int i=0;i<numStudents_;i++)
	{
		Student newStudent("test","testerson");
		
		students_[i] = newStudent;
	}
}

std::string Course::getInstructor()
{
	return instructor_;
}
int Course::getNumOfStudents()
{
	return numStudents_;
}
void Course::printRoster()
{
	for(int i=0;i<numStudents_;i++)
	{
		std::cout <<students_[i].getID()<<"\t"<<students_[i].getFullName()<<"\n";
	}
}