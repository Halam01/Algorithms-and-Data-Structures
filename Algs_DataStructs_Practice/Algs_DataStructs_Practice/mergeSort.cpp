#include "includes.h"



vector<int> merge(vector<int> left, vector<int> right) {
	vector<int> merged;

	while (left.size() != 0 && right.size() != 0) {
		if (left.front() <= right.front()) {
			merged.push_back(left.front());
			left.erase(left.begin());
		}
		else {
			merged.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (left.size() != 0) {
		merged.push_back(left.front());
		left.erase(left.begin());
	}
	while (right.size() != 0) {
		merged.push_back(right.front());
		right.erase(right.begin());
	}

	return merged;
}

vector<int> mergeSort(vector<int> arr) {

	if (arr.size() <= 1) {
		return arr;
	}
	else {
		vector<int> left;
		vector<int> right;
		int j = 0;
		for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
			if (j < arr.size()/ 2) {
				left.push_back(*it);
			}
			else {
				right.push_back(*it);
			}
			j++;
		}

		left = mergeSort(left);
		right = mergeSort(right);

		return merge(left, right);
	}
	
}

/*
O(n log n)
*/