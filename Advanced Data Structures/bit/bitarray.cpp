#include "bitarray.h"
          
//
// void print()
//
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
void BitArray::print()
{	
	std::cout << "|";
	
	for (int i=0; i < BYTES; i++)
	{
		std::bitset<BIT_IN_BYTE> bits = data_[i];
		std::cout << bits << "|";
	}
	
	std::cout << std::endl;	
}

//int LENGTH;	// Length of BitArray in terms of bits.
//int BYTES; // Number of bytes required for BitArray.
//char * data_; // Bit Array
BitArray::BitArray(int size)
{
	data_=new char[size];
	LENGTH=size*8;
	BYTES=size;
}	
		

BitArray::BitArray(const BitArray & array)
{
	data_=array.data_;
	LENGTH=array.LENGTH;
	BYTES=array.BYTES;
}


BitArray::~BitArray()
{
	if(data_!=nullptr)delete [] data_;
}	


void BitArray::clear()
{
	for(int i=0;i<LENGTH;i++)
	{
		data_[i]=0;
	}
}


void BitArray::initialize(char * word, int size)
{
	
	if(data_!=NULL)
	{
		delete [] data_;
	}
	else{}
	
	data_=new char[size];
	LENGTH=size*8;
	BYTES=size;
	for(int i=0;i<BYTES;i++)
	{
		for(int j=0;j<8;j++)
		{
			unsigned char x=(' ');
			x=word[i];
			data_[i]=x;
		}
	}
}

bool BitArray::get(int position) const
{
	return ((data_[position/8] & (1 << ((8-position% 8)-1))) !=0);
}

bool BitArray::set(int position, int bit)
{
	unsigned char x=(' ');
	x=bit;
	if(position%8==0)
	{
		data_[(position/8)-1]=data_[(position/8)-1]|x;
	}
	else
	{	
		x=x<<8-(position%8);
		data_[position/8]=data_[position/8]|x;
	}
	if(bit==0)
	{
		flip(position);
	}
	return true;
}


bool BitArray::flip(int position)
{
	
	unsigned char x=(' ');
	x=1;
	if(position%8==0)
	{
		data_[(position/8)-1]=data_[(position/8)-1]^x;
	}
	else
	{	
		x=x<<8-(position%8);
		data_[position/8]=data_[position/8]^x;
	}
	return true;
}


void BitArray::complement()
{
	unsigned char x=(' ');
	x=1;
	for(int i=0;i<BYTES;i++)
	{
		x=1;
		for(int j=0;j<8;j++)
		{
			data_[i]=data_[i]^x;
			x=x<<1;
		}
	}
}


char BitArray::get8(int position) const
{
	return data_[position/8];
}

void BitArray::set8(char c, int index)
{
	data_[index]=c;
}