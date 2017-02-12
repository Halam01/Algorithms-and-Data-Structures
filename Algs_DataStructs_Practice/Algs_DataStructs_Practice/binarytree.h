#pragma once

struct node {
	int val;
	node *left;
	node *right;
};

class binaryTree {
	public:
		binaryTree();
		~binaryTree();

		void insert(int val);
		node* search(int val);
		void delete_tree();
		void print_tree();
		
	private:
		void delete_tree(node *leaf);
		void insert(int val, node *leaf);
		node* search(int val, node *leaf);
		void print_tree(node *root);

		node *root;

};