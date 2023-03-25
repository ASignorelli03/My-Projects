#include <iostream>
#include <cstring>

void alternate(char input[],int read);

int main()
{
	char word[100];
	int read (0);

	std::cout<<"Enter a word: ";
	
	std::cin>>word;
	
	std::cout<<std::endl<<"Your word with every other letter is... ";
	
	alternate(word,read);
	
	std::cout<<std::endl;

	return 0;
}

void alternate(char input[],int read)
{
	if(read==strlen(input))
	{
		return;
	}
	else
	{
		if(read % 2 == 0)
		{
			std::cout<<input[read];
		}
		else
		{
		}
	}
	alternate(input,++read);
}