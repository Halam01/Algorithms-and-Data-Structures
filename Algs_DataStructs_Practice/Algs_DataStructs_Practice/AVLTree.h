#pragma once
struct AVLnode {
	char key;
	int val;
	int height;
	AVLnode *left;
	AVLnode *right;
	AVLnode *parent;
};

class AVLTree {
	public:
		AVLTree();
		~AVLTree();
		void insert(char key, int val);
		void remove(char key);
		void rebalanceTree(AVLnode v);


	private:
		//local subtree rebalance
		void restructure(AVLnode x);
		AVLnode *root;

};