#pragma once
#include <vector>

//random array generator
int* genRand(int size, int arr[]);

//sorting algorithms
void insertionSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
std::vector<int> mergeSort(std::vector<int> arr);

//search algorithms
int binarySearch(int arr[], int val, int low, int high);
int binaryRotated(int arr[], int val, int low, int high);


//misc
int fibRecur(int val);
void fibDynam(int val);