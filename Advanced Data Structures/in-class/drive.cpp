#include<iostream>
#include<fstream>
#include "Student.h"

int main()
{
	std::cout <<"Hello World!"<< std::endl;
	
	std::ifstream input("file.txt");
	
	
	//Student s1;
	//s1.setName("tony");
	// Student s1 = new Student();---java
	
	Student s1("tony", 1, 1,"CS");
	
	std::cout << s1.getName() << std::endl;
	
	return 0;
}

//make -f makefile.STUDENTS     -- thomas command