#pragma once
#include <string>

using namespace std;

struct TreeNode {
	int data;
	TreeNode *left;
	TreeNode *right;
	TreeNode *parent;

	TreeNode() {
		left = right = NULL;
	}

	TreeNode(int newVal) {
		data = newVal;
		left = right = NULL;
	}
};