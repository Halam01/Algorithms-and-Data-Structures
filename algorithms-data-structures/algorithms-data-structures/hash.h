#pragma once


class hash_arr {
public:
	hash_arr(int length);
	~hash_arr();
	void insert(int val);
	void commonElements();
	int *buckets;
	int size;
private:
	int hash_func(int val);
};
