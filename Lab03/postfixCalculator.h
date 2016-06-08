/*
Liya Xu
lx2hy
postfixCalculator.h
2014.02.06
*/

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include "Stack.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class postfixCalculator {
public:
	postfixCalculator();
	void push(int e);  //This adds the passed element to the top of the stack.
	int top(); //This returns the element on the top of the stack. It does not remove that element from the top. If the stack is empty, then somehow an error must be indicated – printing an error message and exiting is fine for reporting errors for this lab.
	void pop();  //This removes the element on the top of the stack, but does not return it. If the stack is empty, then somehow an error must be indicated – for this lab, you can just print out an error message and then exit.
	bool empty(); //This tells whether there are any elements left in the stack (false) or not (true).
	void add();
	void substract();
	void multiply();
	void divide();
	void negate();
	void read();
	
private:
	Stack thestack;
};

#endif