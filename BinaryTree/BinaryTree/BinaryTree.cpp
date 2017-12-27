#pragma once
#include <iostream>
#include "BinaryTree.h"

using namespace std;

// CONSTRUCTORS
BinaryTree::BinaryTree() {
	root = NULL;
}

BinaryTree::BinaryTree(int newVal) {
	root = new TreeNode(newVal);
}

// FUNCTIONS
void BinaryTree::insertSorted(TreeNode *cur, int val){
	if (root == NULL) {
		root = new TreeNode(val);
	}
	else {
		if (val <= cur->data) {
			if (cur->left == NULL) {
				TreeNode *temp = new TreeNode(val);
				cur->left = temp;
				temp->parent = cur;
			}
			else {
				insertSorted(cur->left, val);
			}
		}
		else {
			if (cur->right == NULL) {
				TreeNode *temp = new TreeNode(val);
				cur->right = temp;
				temp->parent = cur;
			}
			else {
				insertSorted(cur->right, val);
			}
		}
	}
}
void BinaryTree::preOrderPrint(TreeNode *cur){
	cout << cur->data << ' ';
	if (cur->left != NULL) {
		inOrderPrint(cur->left);
	}
	if (cur->right != NULL) {
		inOrderPrint(cur->right);
	}
}

void BinaryTree::inOrderPrint(TreeNode *cur){
	if (cur->left != NULL) {
		inOrderPrint(cur->left);
	}
	cout << cur->data << ' ';
	if (cur->right != NULL) {
		inOrderPrint(cur->right);
	}
}

void BinaryTree::postOrderPrint(TreeNode *cur){
	if (cur->left != NULL) {
		inOrderPrint(cur->left);
	}
	if (cur->right != NULL) {
		inOrderPrint(cur->right);
	}
	cout << cur->data << ' ';
}