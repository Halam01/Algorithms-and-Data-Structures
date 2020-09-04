#include "includes.h"


void selectionSort(int arr[], int size) {
	cout << "Running SelectionSort: ";
	clock_t start = clock();
	double duration;

	for (int i = 0; i < size; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}

		if (min != i) {
			swap(arr[min], arr[i]);
		}

	}
	


	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << " // Run time on " << size << " elements: " << duration;
	cout << endl;
}

/*
O(n^2)
*/