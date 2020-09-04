#include "includes.h"

void insertionSort(int arr[], int size) {
	cout << "Running insertionSort: ";
	clock_t start = clock();
	double duration;

	for (int i = 1; i < size; i++) {
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j = j - 1;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << " // Run time on " << size << " elements: " << duration;
	cout << endl;
};

/*
Worst case - O(n^2), may have to swap all n elements n times
*/