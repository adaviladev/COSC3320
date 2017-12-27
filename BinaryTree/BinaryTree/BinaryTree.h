#ifndef __BINARY_TREE__
#define __BINARY_TREE__
#pragma once
#include "TreeNode.h"

class BinaryTree {
public:
	TreeNode *root;

	// CONSTRUCTORS
	BinaryTree();
	BinaryTree(int newVal);

	// FUNCTIONS
	void insertSorted(TreeNode *cur, int val);
	void preOrderPrint(TreeNode *cur);
	void inOrderPrint(TreeNode *cur);
	void postOrderPrint(TreeNode *cur);
};
#endif // !__BINARY_TREE__
