#ifndef COURSE_H
#define COURSE_H

#include <string>

#include "student.h"

class Course
{
	public:
		Course();
		Course(std::string,int);
		~Course();
		
		std::string getInstructor();
		int getNumOfStudents();
		void printRoster();

		
	protected:
		Student * students_;
		std::string instructor_'
		int numStudents_;
		
		
}

#endif