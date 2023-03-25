//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#include "DoublyLinkedList.h"
DoublyLinkedList::DoublyLinkedList() :LinkedList()
{
	
}
DoublyLinkedList::~DoublyLinkedList()
{
	
}
void DoublyLinkedList::printList()
{
	if(!isEmpty())
	{
		LinkedNode * current = getHead();
		//current=head_;
		std::cout<<current->getValue();
		while(current->getNextLinkedNode()!=nullptr)
		{
			current=current->getNextLinkedNode();
			std::cout<<"<-->"<<current->getValue();
		}
		std::cout<<"\n";
	}
	else{}
}
void DoublyLinkedList::insertLinkedNode(LinkedNode * node, int data)
{
	insert(data);
}
void DoublyLinkedList::insertAfterLinkedNode(LinkedNode * node, int data)
{
	LinkedNode * newNode=new LinkedNode(data,nullptr,nullptr);
	if(getHead() == nullptr && getTail() == nullptr)//empty list
	{
		insert(data);
	}
	else if(node->hasNextLinkedNode())//middle of list
	{
		
		newNode->setNextLinkedNode(node->getNextLinkedNode());
		newNode->setPrevLinkedNode(node->getNextLinkedNode()->getPrevLinkedNode());
		node->getNextLinkedNode()->setPrevLinkedNode(newNode);
		node->setNextLinkedNode(newNode);
	}
	else//end of list
	{
		setTail(newNode);
		node->setNextLinkedNode(newNode);
		newNode->setPrevLinkedNode(node);
	}
	add1();
}
void DoublyLinkedList::insertBeforeLinkedNode(LinkedNode * node, int data)
{
	LinkedNode * newNode=new LinkedNode(data,nullptr,nullptr);
	if(getHead() == nullptr && getTail() == nullptr)//empty list
	{
		insert(data);
	}
	else if(node->hasPrevLinkedNode())//middle of list
	{
		
		newNode->setPrevLinkedNode(node->getPrevLinkedNode());
		newNode->setNextLinkedNode(node->getPrevLinkedNode()->getNextLinkedNode());
		node->getPrevLinkedNode()->setNextLinkedNode(newNode);
		node->setPrevLinkedNode(newNode);
	}
	else//end of list
	{
		setHead(newNode);
		node->setPrevLinkedNode(newNode);
		newNode->setNextLinkedNode(node);
	}
	add1();
}