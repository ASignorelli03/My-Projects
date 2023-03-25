#include <iostream>
#include <string>
#include "person.h"

class Student : public person
{
	public:
		// Name(string),Year(INT), ID(INT), Major(string)
		Student()//required empty contructor
		{
			
		}
		
		Student(std::string name, int year, int id, std::string major)//constructor
		{
			name_=name;
			year_=year;
			id_=id;
			major_=major;
		}
		
		~Student()//destructor
		{
			
		}
		
		void setID(int id)
		{
			id_=id;
		}
		int getID()
		{
			return id;
		}
		
		void setYear(int year)
		{
			year_ = year;
		}
		int getYear()
		{
			return year_;
		}
		
		void setMajor(std::string major)
		{
			
		}
		std::get major()
		{
			return major_;
		}
		
	private:
		int year_;
		int id_;
		std::string major_;
		
};//semicollon makes this a class instead of a function

int main()
{
	std::cout <<"Hello World!"<< std::endl;
	
	//Student s1;
	//s1.setName("tony");
	// Student s1 = new Student();---java
	
	Student s1("tony", 1, 1,"CS");
	
	Person me("Sig");
	
	Student * s2 = new Student("tony", 3, 4,"ccophs");
	
	std:cout << s2->getName() << std::endl;//pointer literal arrow
	
	delete s2;//call destructor to eliminate memory leak
	
	std::cout << s1.getName() << std::endl;
	
	return 0;
}