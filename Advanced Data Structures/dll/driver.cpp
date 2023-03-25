//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#include "DoublyLinkedList.h"
int main()
{	
	std::cout<<"\nPlease enter the file you wish to make into a DoublyLinkedList: ";
	std::string fname;//put numbers from file fname into dll A
	std::cin>>fname;
	DoublyLinkedList a;
	std::fstream file;
	file.open(fname);
	int x(0);
	if(file.is_open())	
	{
		while(!file.eof())
		{
			file>>x;
			a.insertLinkedNode(a.getTail(),x);
		}
	}
	file.close();
	
	
	int hopsaf(0);//hops of a test forwards
	int hopsab(0);//hops of a test backwards
	int number(0);//ifstream input
	int total(0);//total hops list a
	DoublyLinkedList inserts;
	std::fstream insertList;
	std::string iname;//inserts name
	std::cout<<"\nPlease enter file to get inserted numbers from: ";
	std::cin>>iname;
	insertList.open(iname);
	if(insertList.is_open())	
	{
		while(!insertList.eof())
		{
			insertList>>number;
			inserts.insertLinkedNode(inserts.getTail(),number);
		}
	}
	insertList.close();
	
	
	
	LinkedNode * counter=inserts.getHead();//inserted files numbers
	LinkedNode * tempHead=a.getHead();//headcount bookmark
	LinkedNode * tempTail=a.getHead();//tailcount bookmark
	for(int i=0;i<20;i++)
	{
		tempHead=a.getHead();
		tempTail=a.getTail();
		hopsaf=0;
		hopsab=0;
		while(counter->getValue()>=tempHead->getValue())
		{
			tempHead=tempHead->getNextLinkedNode();
			hopsaf++;
		}
		
		while(counter->getValue()<=tempTail->getValue())
		{
			tempTail=tempTail->getPrevLinkedNode();
			hopsab++;
		}
		
		if(hopsaf<hopsab)
		{
			total=total+hopsaf;
			a.insertBeforeLinkedNode(tempHead,counter->getValue());
		}
		else
		{
			total=total+hopsab;
			a.insertAfterLinkedNode(tempTail,counter->getValue());
		}
		
		counter=counter->getNextLinkedNode();
		
	
	}
	
	//output finished dll
	std::fstream ofile;
	std::string oname;//output file name
	std::cout<<"\nPlease enter the output file name for this DoublyLinkedList: ";
	std::cin>>oname;
	ofile.open(oname);
	LinkedNode * marker=a.getHead();//temp ln to print info
	while(marker !=nullptr)
	{
		ofile<< marker->getValue()<<" ";
		marker=marker->getNextLinkedNode();
	}
	ofile.close();
	
	//ofile for hops
	std::cout<<"\nPlease enter the output file for hops: ";
	std::cin>>oname;
	ofile.open(oname,std::ios_base::app);
	ofile<<"\nTotal hops for "<<fname<<": "<<total;
	ofile.close();
	
	
	return 0;
}