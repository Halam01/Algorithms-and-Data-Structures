#include "includes.h"

void main() {

	//testing binary tree class
	binaryTree btree = binaryTree();
	btree.insert(8);
	btree.insert(2);
	btree.insert(3);
	btree.insert(5);
	btree.insert(10);
	btree.insert(7);
	btree.print_tree();

	//testing stack class
	stack tStack = stack(2);
	stack_el e1 = stack_el();
	stack_el e2 = stack_el();
	e1.val = 1;
	e2.val = 2;
	tStack.push(e1);
	tStack.push(e2);
	tStack.print_size();
	tStack.print_stack();
	tStack.pop();
	tStack.pop();
	tStack.print_size();
	
	//testing sorting algs
	const int size = 10;
	int arr1[size];

	int* arr = genRand(size, arr1);
	insertionSort(arr, 10);

	arr = genRand(size, arr1);
	bubbleSort(arr, 10);

	//testing search algs
	int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size2 = 9;
	int val = 3;
	cout << binarySearch(arr2, val, 0, size2) << endl;



	
	

}