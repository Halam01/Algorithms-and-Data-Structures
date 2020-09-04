#include "hash.h"
#include "includes.h"

hash_arr::hash_arr(int length) {
	size = length;
	buckets = new int[32]();
};

hash_arr::~hash_arr() {};

void hash_arr::insert(int val) {
	int i = hash_func(val);
	buckets[i] += 1;
};

int hash_arr::hash_func(int val) {
	return val;
};

void hash_arr::commonElements() {
	for (int i = 0; i < 32; i++) {
		if (buckets[i] != NULL) {
			if (buckets[i] == 2) cout << i << " ";
		}
	}
	cout << endl;
};
