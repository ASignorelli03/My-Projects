#include "person.h"

Person::person()
{
	
}
Person::person(std::string name)
{
	name_=name;
}
~Person::person()
{
	
}
std::string Person::getName()
{
	return name_;
}

void Person::person setName(std::string name)
{
	name_=name;
}