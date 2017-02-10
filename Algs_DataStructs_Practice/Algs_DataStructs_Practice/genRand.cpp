#include "includes.h"

int* genRand(int size, int arr[]) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}

	return arr;
}