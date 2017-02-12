#include "includes.h"

void main() {
	const int size = 10;
	int arr1[size];
	
	int* arr = genRand(size, arr1);
	insertionSort(arr, 10);

	arr = genRand(size, arr1);
	bubbleSort(arr, 10);

	binaryTree btree = binaryTree();
	btree.insert(8);
	btree.insert(2);
	btree.insert(3);
	btree.insert(5);
	btree.insert(10);
	btree.insert(7);
	btree.print_tree();

	
	

}