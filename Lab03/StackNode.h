/*
Liya Xu
lx2hy
StackNode.h
2014.02.06
*/

#ifndef STACKNODE_H
#define STACKNODE_H

#include <iostream>
using namespace std;

class StackNode{
public:
	StackNode();
	
private:
	int value;
	StackNode *previous;
	
	friend class Stack;
};

#endif