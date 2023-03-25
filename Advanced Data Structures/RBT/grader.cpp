#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli

void calculateLetterValue(double Ngrade,char & Lgrade);

int main()
{
	double Ngrade(0);
	char Lgrade(' ');
	double score1(0);
	double score2(0);
	double score3(0);
	double score4(0);
	
	std::string fileName(" ");
	std::string outputFile(" ");
	
	std::cout<<"Welcome to Anthony's Grade Calculator!"<<"\n"<<"Please enter the file you wish to open: ";
	
	std::cin>> fileName; 
	
	std::ifstream input(fileName);//open input file
	

	
	if(input.is_open())
	{

		std::stringstream changy;//add string to x int 
		std::stringstream extraz;//extra place to store row of nums
		
		std::cout<<"Reading from file "<< fileName <<"..."<<"\n";
	
		std::cout<<"Calculating grades..."<<"\n";
		
		while(!input.eof())
		{

			std::string group(" ");
			std::string nums(" ");
			std::string add(" ");
			double total(0);
			double count(0);
			int x(0);
			
			std::getline(input, group);
			std::getline(input, nums);
			
			extraz.clear();
			extraz.str(" ");
			extraz << nums;
			
			while(std::getline(extraz,add,',')) //gets all numbers after each string
			{
				changy.clear();
				changy.str(" ");	

				changy << add;
				
				changy >> x;
		
				total = total + x;
				count++;
				
			}
			
			if(group=="Assignments")//Assignments: 50%
			{	
				score1 = (total / count) * 0.5;
			} else if(group=="Participation") //Participation:  10%  
			{
				score2 = (total / count) * 0.1;
			} else if(group=="Midterm") //Midterm  Exam:  20%
			{
				score3 = (total / count) * 0.2;
			} else if(group=="Final") //Final  Exam:  20%
			{
				score4 = (total / count) * 0.2;
			}
			//std::cout<<" + "<<score1<<" + "<<score2<<" + "<<score3<<" + "<<score4<<"\n";
		}
		Ngrade = score1 + score2 + score3 + score4;
		//std::cout<<Ngrade;
	}
	else
	{
		std::cout<<"Invalid file name"<<"\n";
	}
	input.close();
	
	calculateLetterValue(Ngrade,Lgrade);

	std::cout<<"Save To (Filename): "; //output file saving
	
	std::cin>>outputFile;
	
	std::ofstream output(outputFile);
	
	output << Ngrade << "\t" << Lgrade;
 
	output.close();
 
	std::cout<<"Score & Letter Grade written to file: "<<outputFile<<"\n";
 
	std::cout<<"Thank you for using my program - good bye!"<<"\n";
	
	return 0;
}

void calculateLetterValue(double Ngrade,char & Lgrade)//Ngrade->Lgrade
{
	if(90<=Ngrade)
	{
		Lgrade = 'A';
	}
	else if(80<=Ngrade<90)
	{
		Lgrade = 'B';
	}
	else if(70<=Ngrade<80)
	{
		Lgrade = 'C';
	}
	else if(60<=Ngrade<70)
	{
		Lgrade = 'D';
	}
	else if(Ngrade<60)
	{
		Lgrade = 'F';
	}

}