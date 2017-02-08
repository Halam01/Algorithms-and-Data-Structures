#include "includes.h"

void bubbleSort(std::vector<int> arr) {
	for (int i = (arr.size()) - 1; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			if (arr[j - 1] > arr[j]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr.at(i) << " ";
	}
}

/*
	Complexity = O(n^2)
	Why?
	If statement + element swapping is O(1)
	Inner loop is O(i), where i = 1 + 2 + 3+...+(n-1)
	Outer loop is O(n)
*/
