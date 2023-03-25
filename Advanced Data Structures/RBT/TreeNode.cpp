#include "TreeNode.h"

//
// TreeNode(int data)
//
TreeNode::TreeNode(int data) : Node(data)
{
	// We could also use the initialization list here...
	data_ = data;
	leftChild_ = nullptr;
	rightChild_ = nullptr;
	parent_ = nullptr;
	color_="RED";
}

//
// TreeNode(const TreeNode & node)
//
TreeNode::TreeNode(const TreeNode & node)
{
	data_ = node.data_;
	leftChild_ = node.getLeftChild();
	rightChild_ = node.getRightChild();
	parent_ = node.getParent();
	color_=node.getColor();
}

//
// ~TreeNode()
//
TreeNode::~TreeNode()
{
	// Recursive Delete
	if (leftChild_ != nullptr)
	{
		delete leftChild_;
	}
	
	if (rightChild_ != nullptr)
	{
		delete rightChild_;
	}
}

//
// int TreeNode::getData()
//
int TreeNode::getData()
{
	return data_;////
}

//
// TreeNode * TreeNode::getLeftChild()
//
TreeNode * TreeNode::getLeftChild()const
{
	return leftChild_;
}

//
// TreeNode * TreeNode::getRightChild()
//
TreeNode * TreeNode::getRightChild()const
{
	return rightChild_;
}

//
// TreeNode * TreeNode::getParent()
//
TreeNode * TreeNode::getParent()const
{
	return parent_;
}

//
// void TreeNode::setLeftChild(TreeNode * child)
//
void TreeNode::setLeftChild(TreeNode * child)
{
	leftChild_ = child;
}

//
// void TreeNode::setRightChild(TreeNode * child)
//
void TreeNode::setRightChild(TreeNode * child)
{
	rightChild_ = child;
}

//
// void TreeNode::setParent(TreeNode * parent)
//
void TreeNode::setParent(TreeNode * parent)
{
	parent_ = parent;
}
std::string TreeNode::getColor()const
{
	return color_;
}
void TreeNode::setColor(std::string color)
{
	color_=color;
}