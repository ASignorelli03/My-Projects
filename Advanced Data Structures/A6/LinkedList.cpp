//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#include "LinkedList.h"
LinkedList::LinkedList()
{
	tail_=nullptr;
	head_=nullptr;
	numNodes=0;
}
LinkedList::~LinkedList()
{
	
}
bool LinkedList::isEmpty()
{
	if(head_==nullptr)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int LinkedList::getLength()
{
	return numNodes;
}
void LinkedList::insert(int element)
{
	LinkedNode * newNode =new LinkedNode(element,nullptr,nullptr);
	if(isEmpty())//size 0
	{
		head_=newNode;
	}
	else if(tail_==nullptr)//size 1
	{
		tail_=newNode;
		head_->setNextLinkedNode(tail_);
		tail_->setPrevLinkedNode(head_);
	}
	else// size >1
	{
		newNode->setPrevLinkedNode(tail_);
		tail_->setNextLinkedNode(newNode);
		tail_=newNode;
	}
	numNodes++;
}
void LinkedList::printList()
{
	if(!isEmpty())
	{
		LinkedNode * current = head_;
		std::cout<<current->getValue();
		while(current->getNextLinkedNode()!=nullptr)
		{
			current=current->getNextLinkedNode();
			std::cout<<"->"<<current->getValue();
		}
		std::cout<<"\n";
	}
	else{}
}
LinkedNode * LinkedList::getHead()
{
	return head_;
}
LinkedNode * LinkedList::getTail()
{
	return tail_;
}
void LinkedList::setHead(LinkedNode * head)
{
	head_=head;
}
void LinkedList::setTail(LinkedNode * tail)
{
	tail_=tail;
}
void LinkedList::add1()
{
	numNodes++;
}