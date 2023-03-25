//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "LinkedList.h"
class DoublyLinkedList : public LinkedList
{
	public:
		int find(int key); 
		void removeLinkedNode(int key); 
		DoublyLinkedList();
		~DoublyLinkedList();
		virtual void printList();
		void insertLinkedNode(LinkedNode * node, int data);
		void insertAfterLinkedNode(LinkedNode * node, int data);
		void insertBeforeLinkedNode(LinkedNode * node, int data);
};
#endif