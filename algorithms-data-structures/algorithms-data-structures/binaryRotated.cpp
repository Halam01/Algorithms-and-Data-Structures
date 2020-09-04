#include "includes.h"

//needs adjustment, not working in all cases
int binaryRotated(int arr[], int val, int low, int high) {
	if (low > high) return NULL;
	int mid, pivot;
	for (int i = 0; i < high; i++) {
		if (arr[i] > arr[i + 1]) {
			pivot = i;
			break;
		}
	}
	if (arr[pivot] == val) return pivot;
	else if (arr[0] <= val) return binarySearch(arr, val, low, pivot - 1);
	else return binarySearch(arr, val, pivot + 1, high);
	
};