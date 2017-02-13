#pragma once
#include "includes.h"

//random array generator
int* genRand(int size, int arr[]);

//sorting algorithms
void insertionSort(int arr[], int size);
void bubbleSort(int arr[], int size);

//search algorithms
int binarySearch(int arr[], int val, int low, int high);