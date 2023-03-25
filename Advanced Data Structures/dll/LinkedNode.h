//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#ifndef LinkedNODE_H
#define LinkedNODE_H
#include "Node.h"
class LinkedNode :public Node
{
	public: 
		LinkedNode(int data, LinkedNode * nextLinkedNode, LinkedNode * prevLinkedNode);
		LinkedNode * getPrevLinkedNode();
		LinkedNode * getNextLinkedNode();
		void setNextLinkedNode(LinkedNode * nextLinkedNode);
		void setPrevLinkedNode(LinkedNode * prevLinkedNode);
		bool hasNextLinkedNode();
		bool hasPrevLinkedNode();
	private:
		LinkedNode * nextLinkedNode_;
		LinkedNode * prevLinkedNode_;
	protected:
		LinkedNode() {}
};
#endif