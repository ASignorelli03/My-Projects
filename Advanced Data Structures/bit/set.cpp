#include "set.h"

// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
Set::Set(int size) :data_(size)
{
	
}	


Set::~Set()
{
	
}
                                 

void Set::initialize(char * word, int size)
{
	data_.initialize(word,size);
}


int Set::getCardinality() const
{
	int num=0;
	unsigned char x=(' ');
	x=1;
	for(int j=0;j<data_.length();j++)
	{
		if(data_.get8(j)&x) num++;
		if(j%8==0)
			x=1;
		else
			x=x<<1;
	}
	
	return num;
}


BitArray & Set::getData()
{
	return data_;
}


bool Set::setUnion(Set & B)//or
{
	char c;
	if(data_.bytes()==B.getData().bytes())
	{
		for(int i=0;i<data_.bytes();i++)//sets number from pos 1 up to B length to AND A
		{
			c=(data_.get8(i*8))|(B.getData().get8(i*8));
			data_.set8(c,i);
		}
		return true;
	}
	return false;
}

 
bool Set::setIntersection(Set & B)//and
{//a has to be greater than b
	char c;
	if(data_.bytes()==B.getData().bytes())
	{
		for(int i=0;i<data_.bytes();i++)//sets number from pos 1 up to B length to AND A
		{
			c=(data_.get8(i*8))&(B.getData().get8(i*8));
			data_.set8(c,i);
		}
		return true;
	}
	return false;
}