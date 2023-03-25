//Honor Pledge:
//
//I pledge that I have neither given nor received any help on this assignment.
//
//Anthony Signorelli
#include "LinkedNode.h"
LinkedNode::LinkedNode(int data, LinkedNode * nextLinkedNode, LinkedNode * prevLinkedNode) : Node(data)
{
	nextLinkedNode_=nextLinkedNode;
	prevLinkedNode_=prevLinkedNode;
}
LinkedNode * LinkedNode::getNextLinkedNode()
{
	return nextLinkedNode_;
}
LinkedNode * LinkedNode::getPrevLinkedNode()
{
	return prevLinkedNode_;
}
void LinkedNode::setNextLinkedNode(LinkedNode * nextLinkedNode)
{
	nextLinkedNode_=nextLinkedNode;
}
void LinkedNode::setPrevLinkedNode(LinkedNode * prevLinkedNode)
{
	prevLinkedNode_=prevLinkedNode;
}
bool LinkedNode::hasNextLinkedNode()
{
	if(nextLinkedNode_!=0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool LinkedNode::hasPrevLinkedNode()
{
	if(prevLinkedNode_!=0)
	{
		return true;
	}
	else
	{
		return false;
	}
}