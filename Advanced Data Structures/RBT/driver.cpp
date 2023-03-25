#include "RedBlackTree.h"
int main()
{
	//phase 1
	/*std::fstream file;
	file.open("data-1.txt");
	int x(0);
	if(file.is_open())	
	{
		while(!file.eof())
		{
			file>>x;
			std::cout<<x<<" ";
		}
	}
	file.close();
	std::cout<<"\n";*/
	

	//phase 2
	/*BinarySearchTree a;
	std::fstream fil;
	fil.open("data-1.txt");
	int y(0);
	if(fil.is_open())	
	{
		while(!fil.eof())
		{
			fil>>y;
			a.insert(y);
		}
	}
	fil.close();
	std::cout<<"Root: "<<a.getRoot()->getData();*/
	
	
	//phase 3
	/*RedBlackTree b;
	std::fstream fi;
	fi.open("data-1.txt");
	int z(0);
	if(fi.is_open())	
	{
		while(!fi.eof())
		{
			fi>>z;
			b.insert(z);
		}
	}
	fi.close();
	std::cout<<"Root: "<<b.getRoot()->getData();
	std::cout<<"\nColor: "<<b.getRoot()->getColor();*/
	
	//phase 4
	RedBlackTree c;
	c.insert(3);
	c.insert(18);
	c.insert(22);
	/*std::fstream f;
	f.open("data-1.txt");
	int w(0);
	if(f.is_open())	
	{
		while(!f.eof())
		{
			f>>w;
			c.insert(w);
		}
	}
	f.close();*/
	std::cout<<"\n1st Right Child: "<<c.getRoot()->getRightChild()->getData();
	std::cout<<"\n:It's Color: "<<c.getRoot()->getRightChild()->getColor();
	std::cout<<"\n2nd Right Child: "<<c.getRoot()->getRightChild()->getLeftChild()->getData();
	std::cout<<"\n:It's Color: "<<c.getRoot()->getRightChild()->getLeftChild()->getColor();
	
	
	
	std::cout<<"\n";
	return 0;
}