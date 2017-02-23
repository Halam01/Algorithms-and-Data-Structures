#include "includes.h"
#include "hash.h"

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

	arr = genRand(size, arr1);
	selectionSort(arr, 10);


	cout << "Running MergeSort: ";
	clock_t start = clock();
	double duration;
	vector<int> arrv = { 0, 2, 6, 4, 3, 5, 7, 9, 8 };
	arrv = mergeSort(arrv);
	for (vector<int>::iterator it = arrv.begin(); it != arrv.end(); it++)
		cout << *it << " ";
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << " // Run time on " << size << " elements: " << duration;
	cout << endl;

	//testing search algs
	int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size2 = 9;
	int val = 3;
	cout << "Binary Search: " << binarySearch(arr2, val, 0, size2) << endl;


	//binary search of rotated array
	int arr3[] = { 5, 6, 7, 8, 1, 2, 3 };
	int size3 = 7;
	int val2 = 1;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
    val2 = 8;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
	val2 = 6;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
	val2 = 2;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
	
	//hash
	hash_arr h = hash_arr(5);
	int arr4[] = { 1, 3, 5, 7, 8 };
	int arr5[] = { 3, 4, 7, 1, 2};

	for (int i = 0; i < 5; i++) {
		h.insert(arr4[i]);
		h.insert(arr5[i]);
	}
	
	//find common elements
	cout << "Common elements: ";
	h.commonElements();

	//primes
	findPrimes(50);

}