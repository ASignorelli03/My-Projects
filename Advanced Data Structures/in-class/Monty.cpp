#include <iostream>
#include <string>
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli

int main()
{
	//variables
	int num(0);
	std::string name("");
	std::string color("");
	
	//This is the introduction to the game and name input space
	std::cout<<"Welcome to Anthony Signorelli's Monty C++ Text-Based Adventure!"<<"\n"<<"WHAT is your name?";
	std::cin>>name;
	std::cout<<"\t"<<"Welcome sir "<<name<<"\n";
	
	//The first simple math problem execution
	std::cout<<"WHAT is the result of 8 - 7?";
	std::cin>> num;
	
	//Result of simple math answer
	if(num!=1)
	{
		std::cout<<"\t"<<"Wrong! You shall be sent directly to Thanatos!"<<"\n";
		return(0);
	}
	else
	{
		std::cout<<"\t"<<"Correct Sir "<<name<<"\n";
	}
	
	//second hardish math question
	std::cout<<"WHAT is the result of ((235/5)-7)/8?";//5
	std::cin>> num;
	
	
	//result tree of second answer
	if(num!=5)
	{
		std::cout<<"\t"<<"Wrong! You shall be crushed by the hand of Zeus!"<<"\n";
		return(0);
	}
	else
	{
		std::cout<<"\t"<<"Correct Sir "<<name<<"\n";
	}

	//color question
	std::cout<<"WHAT is your favorite color?";
	std::cin>>color;
	
	//string identifiers
	std::string blue("blue");
	std::string Blue("Blue");
	
	//branches of color input
	if(color==blue)
	{
		std::cout<<"\t"<<"Correct Sir "<<name<<"\n";
	}
	else if(color==Blue)
	{
		std::cout<<"\t"<<"Correct Sir "<<name<<"\n";
	}
	else
	{
		std::cout<<"\t"<<"Wrong! Your soul now belongs to the devil!"<<"\n";
		return(0);
	}
	
	//final question unladen swallow
	std::cout<<"WHAT is the air speed velocity of an unladen swallow?";
	std::cin>>num;
	
	//branch of answers, unladen swallow
	if(num%2==1)
	{
		//odd num
		std::cout<<"\t"<<"I, I didn't know that!";
		std::cout<<"\n"<<"The CPU Wizard is dragged to the pits of tartarus!";
		std::cout<<"\n"<<"Congratulations Sir "<<name<<" you won!!";
		std::cout<<"\n"<<"Thank you for playing my Monty C++ game Sir "<<name<<". Intermission..."<<"\n""\n";
	}
	else//even num
	{
		std::cout<<"\t"<<"Wrong! you shall be sent to the sea of the damned"<<"\n";
		return(0);
	}
	
	return(0);
}