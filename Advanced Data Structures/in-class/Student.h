#ifndef STUDENT_H
#define STUDENT_H

#include <string>
class Student
{
	public:
		Student();
		Student(std::string,std::string,int);
		~Student();
		populateCourse();
		
		std::string getFullName();
		int getID();
	
	protected:
		std::string firstName_;
		std::string lastName_;
		int id_;
		
	
	
}


#endif