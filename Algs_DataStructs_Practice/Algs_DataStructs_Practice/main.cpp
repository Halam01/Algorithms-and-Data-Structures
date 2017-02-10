#include "includes.h"

void main() {
	const int size = 10;
	int arr1[size];
	
	int* arr = genRand(size, arr1);
	insertionSort(arr, 10);

	arr = genRand(size, arr1);
	bubbleSort(arr, 10);

	
	

}