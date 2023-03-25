#include "dictionary.h"
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
Dictionary::Dictionary() : data_(DICTIONARY_SIZE)
{
	lookupTable_=new int[DICTIONARY_SIZE];
	initializeTable();
}	
Dictionary::Dictionary (const Dictionary & dict)
{
	lookupTable_=dict.lookupTable_;
	//create for loop for deap copydata[i]=a.data[i]
}
Dictionary::~Dictionary()
{
	if(lookupTable_!=nullptr)delete [] lookupTable_;
}
void Dictionary::initialize(char * word, int size)
{
	data_.initialize(word,size);
}
int Dictionary::rank_range(int start, int end, int bit)//how many of (bit) are within the start-end interval
{
	int count(0);
	for(int i=start;i<end;i++)
	{
		if(data_.get(i)==bit) count++;
	}
	return count;
}
int Dictionary::select_range(int start, int end, int k, int bit)//position of kth bit within start-end
{
	int count(0);
	count=start;
	int x(0);
	while(x<k)
	{
		if(data_.get(count)==bit) x++;
		count++;
	}
	return count-1;
}
int Dictionary::rank(int end, int bit)//how many of (bit) are within interval [0-end]
{
	/*int count(0);
	for(int i=0;i<end;i++)
	{
		if(data_.get(i)==bit) count++;
	}
	return count;*/
	/*int x(0);
	for(int i=0;i<256;i++)
	{
		if(lookupTable_[i]!=0)
		{
			if(bit==1)x+=lookupTable_[i];
			else if(bit==0)x+=(8-lookupTable_[i]);
			else{}
		}
	}
	return x;*/
	
	char byte(' ');
	int count(0);
	Set set(1);
	for(int i=0;i<data_.bytes();i++)
	{
		byte= data_.get8(i*8);
		char * bytes = &byte;
		set.initialize(bytes,1);
		count+=set.getCardinality();
	}
	return count-2;
}
int Dictionary::select(int k, int bit)//returns the kth bit in the array
{
	/*int x(0);
	while(x<k)
	{
		if(data_.get(count)==bit) x++;
		count++;
	}
	return count-1;*/
	
	/*for(int i=0;i<data_.bytes();i++)
	{
		if(bit==1)
		{
			count += lookupTable_[data_.get8(i*8)];
		}
		else 
		{
			count += lookupTable_[8-data_.get8(i*8)];
		}
		
		if(count>k)
		{
			if(bit==1)
			{
				count -= lookupTable_[data_.get8(i*8)];
			}
			else 
			{
				count -= lookupTable_[8-data_.get8(i*8)];
			}
			count+= select_range(i*8,i*8+1,k-count,bit);//start end k bit
		}
		std::cout<<" "<<count<<" ";
	}
	return count;*/
	
	int count(0);
	int location(-1);
	int last(0);
	for(int i=0;i<data_.bytes();i++)
	{
		count += lookupTable_[data_.get8(i*8)];
		
		if(count+last>=k)
		{
			return select_range(i*8,(i+1)*8,k-last,bit);
		}
		else
		{
			last=count;
		}
		
		
		
	}
	
	return location;
	
	
	
	
	
	/*char byte(' ');
	int count(0);
	Set set(1);
	for(int i=0;i<data_.bytes();i++)
	{
		byte= data_.get8(i*8);
		char * bytes = &byte;
		set.initialize(bytes,1);
		count+=set.getCardinality();
	}*/
	
}

void Dictionary::initializeTable()
{
	int x(0);
	double temp(0);
	for(int i=0;i<DICTIONARY_SIZE;i++)
	{
		temp=i;
		if(i==0) 
		{
			x=0;
		}
		else if(i==1) 
		{
			x=1;
		}
		else
		{
			while(temp>=1)
			{
				temp=temp-pow(2,(int)log2(temp));
				x++;
				//highest bit position of bit value 1 ex: floor_log2(96)=6 96-2^6=32... log2(32)=5  32-2^5=0 therefor 96=2 96==1100000
			}
		}
		lookupTable_[i]=x;
		x=temp=0;
	}
	/*char byteVal(' ');
	Set set(1);
	char byte[1];
	for(int i=0;i<256;i++)
	{
		byteVal= data_.get8(i*8);
		byte[0]=i;
		set.initialize(byte,1);
		lookupTable_[byteVal]=set.getCardinality();
	}*/
}

void Dictionary::printLookupTable(std::ostream & output)//prints table
{
	std::cout<<"Printing Lookup Table...";
	for(int i=0;i<256;i++)
	{	
		output << "BYTE: "<<i<<"	|	"<<lookupTable_[i]<<"\n";
	}
}