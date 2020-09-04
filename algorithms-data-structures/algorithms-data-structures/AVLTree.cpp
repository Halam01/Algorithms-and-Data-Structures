#include "includes.h"

AVLTree::AVLTree() {};
AVLTree::~AVLTree() {};
void AVLTree::insert(char key, int val) {};
void AVLTree::remove(char key) {};
void AVLTree::rebalanceTree(AVLnode v) {};
void AVLTree::restructure(AVLnode x) {
	AVLnode *parent = x.parent;
	AVLnode *gparent = parent->parent;
};