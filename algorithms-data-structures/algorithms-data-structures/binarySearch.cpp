#include "includes.h"

int binarySearch(int arr[], int val, int low, int high) {
	if (low > high) return NULL;
	else {
		int mid = (low + high) / 2;
		if (val = arr[mid]) return mid;
		else if (val < arr[mid]) return binarySearch(arr, val, low, mid - 1);
		else return binarySearch(arr, val, mid + 1, high);
	}
	
};