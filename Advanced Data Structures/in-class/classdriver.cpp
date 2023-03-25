#include <iosteam>
#include "student.h"
#include "course.h"

int main()
{
	Student test("test,"testerson",1);
	std::cout<<test.getFullName()<<"\n";
	
	Course courseTest("sig",18);
	
	std::cout<<courseTest.getInstructor()<<courseTest.getNumOfStudent();
	
	courseTest.populateCourse();
	
	courseTest.printRoster();
	
	
	return 0;
}