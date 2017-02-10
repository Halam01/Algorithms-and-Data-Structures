#include "includes.h"

void bubbleSort(int arr[], int size) {
	cout << "Running BubbleSort: ";
	clock_t start = clock();
	double duration;

	for (int i = (size - 1); i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	duration = ( clock() - start ) / (double)CLOCKS_PER_SEC;
	cout << " // Run time on " << size << " elements: " << duration;
	cout << endl;
}
/*
	Complexity = O(n^2)
	Why?
	If statement + element swapping is O(1)
	Inner loop is O(i), where i = 1 + 2 + 3+...+(n-1)
	Outer loop is O(n)
*/
