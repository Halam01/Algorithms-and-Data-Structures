#include "includes.h"

//finds the primes up to N using dynamic programming
void findPrimes(int n) {
	int *primes = new int[100]();
	bool is_prime = true;
	primes[0] = 2;
	int pcount = 1;

	for (int i = 2; i < n; i++) {
		is_prime = true;
		for (int j = 0; j < pcount; j++) {
			if (i % primes[j] == 0)
				is_prime = false;
		}

		if (is_prime) {
			primes[pcount] = i;
			pcount++;
		}
	}

	cout << "Primes: ";
	for (int i = 0; i < pcount; i++) {
		cout << primes[i] << " ";
	}
	cout << endl;
};