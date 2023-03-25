#include <iostream>
#include <math.h>
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli

bool isPrime(int x);
void printPrimeNumbers(int &x);
int howManyPrime(int x);

int main()
{
	//variables
		int x(0);
		int IsPrime(0);
		int total(0);
		char see(' ');
		char stay(' ');
		
		std::cout<<"Welcome to Anthony Signorelli's Prime Calculator!"<<"\n";
		
	do{	

		std::cout<<"Please enter a number: ";
		std::cin>>x;
		
		//is it prime?
		
		bool isPrime(int x);
		IsPrime=isPrime(x);
		if(IsPrime)
		{
			std::cout<<x<<" is a prime number."<<"\n";
		}
		else
		{
			std::cout<<x<<" is not a prime number"<<"\n";
		}
		
		//how many prime
		
		total=howManyPrime(x);
		std::cout<<"\t"<<"There are "<<total<<" prime numbers between 0 and "<<x<<"\n";
			
		
		//seeing all those prime numbers between
		
		std::cout<<"Would you like to see the numbers - (Y)es or (N)o? : ";
		std::cin>>see;
		if(see=='Y'||see=='y')
		{
			printPrimeNumbers(x);
		}
		else
		{
		}
	
		//restart?
		std::cout<<"Would you like to continue - (Y)es or (N)o? ";
		std::cin>>stay;
		
		
	}while(stay=='Y'||stay=='y');
	std::cout<<"Thank you for running my program, Goodbye!"<<"\n";
	
	return 0;
}

bool isPrime(int x)
{
	int factor(0);
	
	if(x==0||x==1)
	{
		return false;
	}
	for(factor=2;factor <= x/2;factor++)
	{
		if(x % factor == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int howManyPrime(int x)
{
	int total(0);
	int IsPrime(0);
	while(x-->2)
	{
		bool isPrime(int x);
		IsPrime=isPrime(x);
		if(IsPrime)
		{
			total++;
		}
		else
		{
		}
	}
	
	return total;
}

void printPrimeNumbers(int &x)
{
	int IsPrime(0);
	int count(0);
	std::cout<<"The number(s) are: ";
	while(count<x)
	{
		bool isPrime(int count);
		IsPrime=isPrime(count);
		if(IsPrime)
		{
			std::cout<<count<<" ";
		}
		else
		{
		}
		count++;
	}
	std::cout<<"\n";
}