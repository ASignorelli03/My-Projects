//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "LinkedNode.h"
class LinkedList
{
	public:
		LinkedList();
		~LinkedList();
		bool isEmpty();
		int getLength();
		void insert(int element);
		void printList();
		LinkedNode * getHead();
		LinkedNode * getTail();
		void setHead(LinkedNode * head);
		void setTail(LinkedNode * tail);
	private:
		LinkedNode * head_;
		LinkedNode * tail_;
		int numNodes;
	protected:
		void add1();
};
#endif