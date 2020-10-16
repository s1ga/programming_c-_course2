#include"binaryTree.h"
#include<stdio.h>

// auxiliary func for init node and inserting value
Node* newLeafInsert(int value, Node* leaf)
{
	leaf = new Node;
	leaf->value = value;
	leaf->left = NULL;
	leaf->right = NULL;

	return leaf;
}

//auxiliary private methods realizations
void Tree::insert(int value, Node* leaf)
{
	//if value > leaf.value push it in right side
	if (value > leaf->value) {
		if (leaf->right != NULL) {
			insert(value, leaf->right);
		}
		else {
			leaf->right = newLeafInsert(value, leaf->right);
		}
	}
	else if (value < leaf->value) {
		//if value < leaf.value push it in left side
		if (leaf->left != NULL) {
			insert(value, leaf->left);
		}
		else {
			leaf->left = newLeafInsert(value, leaf->left);
		}
	}
}
//recursivly deletion for destructor
void Tree::delTree(Node* leaf)
{
	if (leaf->left != NULL) {
		delTree(leaf->left);
	}
	else if (leaf->right != NULL) {
		delTree(leaf->right);
	}

	delete leaf;
}
//set value for pushing in the tree
int Tree::setValue()
{
	int value;
	printf("Input value: ");
	scanf_s("%d", &value);
	return value;
}

// public methods realizations

//default constructor
Tree::Tree() : root(NULL){}
//constructor
Tree::Tree(int n)
{
	this->root = NULL;
	// in each iterate push in tree inputed value 
	for (int i = 0; i < n; i++) {
		insert(setValue());
	}
}

//destructor
Tree::~Tree()
{
	delTree(this->root);
}

//tree copy implementation
Node* Tree::copyTree(Node* oldRoot, Node* newRoot)
{
	if (oldRoot == NULL) {
		return NULL;
	}
	else {
		newRoot = new Node;
		newRoot->value = oldRoot->value;
		newRoot->left = copyTree(oldRoot->left, newRoot->left);
		newRoot->right = copyTree(oldRoot->right, newRoot->right);
	}
	return newRoot;
}

//public pushing func
void Tree::insert(int value)
{
	// if root is not empty, insert value
	// else create root and insert this value
	if (this->root != NULL) {
		insert(value, this->root);
	}
	else {
		this->root = newLeafInsert(value, this->root);
	}
}

// counting leaves
unsigned int Tree::leavesCount(Node* root)
{
	//if root is empty return 0
	if (root == NULL) {
		return 0;
	}

	//recursivlty obtain count of leaves
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	else {
		return leavesCount(root->left) + leavesCount(root->right);
	}
}



