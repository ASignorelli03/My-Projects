#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H
#include "BinarySearchTree.h"

class RedBlackTree : public BinarySearchTree
{
	public:
		RedBlackTree();
		RedBlackTree(RedBlackTree & tree);
		~RedBlackTree();
		virtual void insert(int data);
	
	private:
		void rotateLeft(TreeNode *& root, TreeNode *& newNode);
		void rotateRight(TreeNode *& root, TreeNode *& newNode);
		void balanceColor(TreeNode *& root, TreeNode *& newNode);
	
	protected:
		TreeNode * insertNode(TreeNode * root, TreeNode * newNode);
};


#endif