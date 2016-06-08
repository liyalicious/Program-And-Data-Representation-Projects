/*
Liya Xu
lx2hy
Stack.h
2014.02.06
*/

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "StackNode.h"
using namespace std;

class Stack {
public:
	Stack();
	void push(int x);
	void pop();
	int top();
	bool empty();
	
private:
	StackNode *t;
	int count;
};

#endif