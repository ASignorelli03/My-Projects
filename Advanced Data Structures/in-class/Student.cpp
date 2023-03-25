#include "student.h"	
	
Student::Student() : Student("","",-1)
{
	
}
Student::Student(std::string firstName, std::string lastName,int id) 
{
	firstName_=firstName;
	lastName_=lastName:
	id_=id;
}
Student::~Student()
{
	
}
std::string Student::getFullName()
{
	return (firstName_ + " " + lastName_);
}
int Student::getID()
{
	return id_;
}