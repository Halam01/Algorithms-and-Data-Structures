#include "includes.h"


int fibRecur(int val) {
	if (val == 0) {
		return 0;
	}
	if (val == 1) {
		return 1;
	}
    cout << val - 1 + val - 2 << " ";
	return fibRecur(val - 1) + fibRecur(val - 2);
	
};
void fibDynam(int val) {
	cout << "Testing fibbonacci dynamic programming: ";
	int *fibarr = new int();
	fibarr[0] = 1;
	fibarr[1] = 1;
	cout << fibarr[0] << " " << fibarr[1] << " ";
	for (int i = 2; i < val; i++) {
		fibarr[i] = fibarr[i - 1] + fibarr[i - 2];
		cout << fibarr[i] << " ";
	}
	cout << endl;
};
