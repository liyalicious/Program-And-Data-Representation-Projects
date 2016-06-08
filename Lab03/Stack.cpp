/*
Liya Xu
lx2hy
Stack.cpp
2014.02.06
*/

#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack(){
	count = 0;
}

void Stack::push(int x){
	StackNode *pushElement = new StackNode();
	pushElement->value = x;
	pushElement->previous = t;
	t = pushElement;
	count++;
}

void Stack::pop(){
	if(!empty()){
		t = t->previous;
		count--;
	}
}

int Stack::top(){
	return t->value;
}

bool Stack::empty(){
	return count == 0;
}