#include "bitarray.h"
#include "set.h"
#include "dictionary.h"
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli

int main()
{	
	Dictionary f;
	f.initialize("test",4);
	Set x;
	x.initialize("test",4);
	x.getData().print();
	std::cout<<"rank(32,0): "<<f.rank(32,0)<<"\n";
	std::cout<<"select(5,1): "<<f.select(5,1)<<"\n";
	
	std::ofstream newfile("LookupTable.txt");
	
	f.printLookupTable(newfile);
	
	newfile.close();
	std::cout<<"\n";
	
	return 0;
}