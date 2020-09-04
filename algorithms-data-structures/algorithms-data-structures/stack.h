#pragma once


struct stack_el {
	int val;
};


class stack {
	public:
		stack(int size);
		~stack();
		void push(stack_el element);
		stack_el pop();
		void print_stack();
		void print_size();

	private:
		stack_el *stack_arr;
		int stack_size;
		int curr_stack_size;
};