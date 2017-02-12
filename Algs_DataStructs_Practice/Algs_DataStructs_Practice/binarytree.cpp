#include "includes.h"

binaryTree::binaryTree() {
	root = NULL;
}

void binaryTree::delete_tree(node *leaf) {
	if (leaf != NULL) {
		delete_tree(leaf->left);
		delete_tree(leaf->right);
		delete leaf;
	}
}

void binaryTree::insert(int val, node *leaf) {
	if (val < leaf->val) {
		if (leaf->left != NULL) {
			insert(val, leaf->left);
		}
		else {
			leaf->left = new node;
			leaf->left->val = val;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}
	else if (val >= leaf->val) {
		if (leaf->right != NULL) {
			insert(val, leaf->right);
		}
		else {
			leaf->right = new node;
			leaf->right->val = val;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
	}
}

node* binaryTree::search(int val, node *leaf) {
	if (leaf != NULL) {
		if (val == leaf->val)
			return leaf;
		if (val < leaf->val)
			return search(val, leaf->left);
		else
			return search(val, leaf->right);
	}
	else return NULL;
}

void binaryTree::insert(int val)
{
	if (root != NULL)
		insert(val, root);
	else
	{
		root = new node;
		root->val = val;
		root->left = NULL;
		root->right = NULL;
	}
}

node* binaryTree::search(int val)
{
	return search(val, root);
}

void binaryTree::delete_tree()
{
	delete_tree(root);
}

void binaryTree::print_tree(node *leaf) {
	if (leaf == NULL)
		return;
	cout << leaf->val << " ";
	print_tree(leaf->left);
	print_tree(leaf->right);
}

void binaryTree::print_tree() {
	print_tree(root);
}

binaryTree::~binaryTree() {
	delete_tree(root);
};