#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char *argv) {
	int data;
	cout << "Build tree (-1 to quit)? " << endl;
	cin >> data;
	BinaryTree *tree = new BinaryTree();
	while (data != -1){
		tree->insertSorted(tree->root, data);
		cout << tree->root->data << endl;
		cout << "Build tree (-1 to quit)? " << endl;
		cin >> data;
	}
	cout << endl;
	cout << "inOrderPrint" << endl;
	tree->inOrderPrint(tree->root);
	cout << endl;
	cout << "preOrderPrint" << endl;
	tree->preOrderPrint(tree->root);
	cout << endl;
	cout << "postOrderPrint" << endl;
	tree->postOrderPrint(tree->root);
	cout << endl;
	cout << endl;
	TreeNode *cur = tree->root;
	cout << "left" << endl;
	while (cur != NULL) {
		cout << cur->data << ' ';
		cur = cur->left;
	}
	cout << "right" << endl;
	cur = tree->root;
	while (cur != NULL) {
		cout << cur->data << ' ';
		cur = cur->right;
	}

	system("pause");

	return 0;
}