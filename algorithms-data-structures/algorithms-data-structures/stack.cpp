#include "includes.h"

stack::stack(int size) {
	stack_arr = new stack_el [size];
	stack_size = size;
	curr_stack_size = -1;
};

stack::~stack() {};

void stack::push(stack_el element) {
	if (curr_stack_size + 1 == stack_size) {
		cout << "Stack is full." << endl;
		return;
	}
	curr_stack_size += 1;
	stack_arr[curr_stack_size] = element;
};

stack_el stack::pop() {
	if (curr_stack_size < 0) {
		cout << "Stack is already empty." << endl;
		stack_el empty = stack_el();
		empty.val = -1;
		return empty;
	}
	stack_el ret = stack_arr[curr_stack_size];
	//stack_arr[curr_stack_size];
	curr_stack_size -= 1;
	return ret;
};
void stack::print_stack() {
	if (curr_stack_size < 0) {
		cout << "Stack is empty." << endl;
		return;
	}
	for (int i = 0; i <= curr_stack_size; i++) {
		cout << stack_arr[i].val << " ";
	}
	cout << endl;
};

void stack::print_size() {
	cout << curr_stack_size << endl;
};
