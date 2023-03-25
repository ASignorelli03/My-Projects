#include "RedBlackTree.h"
RedBlackTree::RedBlackTree() : BinarySearchTree()
{
	root_=nullptr;
}
RedBlackTree::RedBlackTree(RedBlackTree & tree)
{
	
}
RedBlackTree::~RedBlackTree()
{
	
}
void RedBlackTree::insert(int data)
{
	TreeNode * newNode=new TreeNode(data);
	if(root_==nullptr) newNode->setColor("BLACK");
	root_=insertNode(root_,newNode);
	std::cout<<newNode->getData()<<" "<<newNode->getColor()<<"\n";
	balanceColor(root_,newNode);
}
void RedBlackTree::rotateLeft(TreeNode *& root, TreeNode *& newNode)
{
	if(newNode->getParent()->getColor()=="RED")
	{
		if(newNode->getParent()==root)
		{
			/*TreeNode *beta=new TreeNode(1);
			beta=newNode->getLeftChild();
			newNode->setLeftChild(newNode->getParent());
			newNode->getLeftChild()->setRightChild(beta);
			newNode->getLeftChild()->setParent(newNode);
			newNode->setParent(nullptr);
			root_=newNode;*/
		}
		else
		{
			std::cout<<":)";
			TreeNode * beta=newNode->getLeftChild();
			TreeNode * p=newNode->getParent()->getParent();
			newNode->setLeftChild(newNode->getParent());
			newNode->getLeftChild()->setRightChild(beta);
			newNode->getLeftChild()->getRightChild()->setParent(newNode->getLeftChild());
			newNode->getLeftChild()->setParent(newNode);
			newNode->setParent(p);
			p->setLeftChild(newNode);
			newNode->setColor("BLACK");
		}
	}
}
void RedBlackTree::rotateRight(TreeNode *& root, TreeNode *& newNode)
{
	
}
void RedBlackTree::balanceColor(TreeNode *& root, TreeNode *& newNode)
{
	while(newNode->getColor()=="RED" && newNode->getParent()->getColor()=="RED")
	{
		if(newNode->getParent()->getRightChild()==newNode)
		{
			rotateLeft(root,newNode);
		}
	}
}
TreeNode * RedBlackTree::insertNode(TreeNode * root, TreeNode * node)
{
	// If the BST is empty - go ahead and make the node the root.
	if (root == nullptr)
	{
		return node;
	}
	else
	{
		// Determine which subtree to insert the node into...
		if (node->getData() < root->getData()) 
		{ 
			// Left Subtree
			root->setLeftChild(insertNode(root->getLeftChild(), node)); 
			root->getLeftChild()->setParent(root); 
		} 
		else 
		{ 
			// Right Subtree
			root->setRightChild(insertNode(root->getRightChild(), node)); 
			root->getRightChild()->setParent(root);
		}
		return root;
	}	
}