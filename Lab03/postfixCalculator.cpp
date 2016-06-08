/*
Liya Xu
lx2hy
postfixCalculator.cpp
2014.02.06
*/

#include "Stack.h"
#include <cstdlib>
#include <iostream>
#include "postfixCalculator.h"
using namespace std;

postfixCalculator::postfixCalculator(){
	
}

void postfixCalculator::push(int e){
	thestack.push(e);
}

int postfixCalculator::top(){
	if(thestack.empty()){
		cout << "The stack is empty!" << endl;
		exit(-1);
	} else {
		return thestack.top();
	}
}

void postfixCalculator::pop(){
	if(thestack.empty()){
		cout << "The stack is empty!" << endl;
		exit(-1);
	} else {
		thestack.pop();
	}
	
}

bool postfixCalculator::empty(){
	return thestack.empty();
}

void postfixCalculator::add(){
	int x = this->top();
	this->pop();
	int y = this->top();
	this->pop();
	
	int sum = x + y;
	this->push(sum);
}

void postfixCalculator::substract(){
	int x = this->top();
	this->pop();
	int y = this->top();
	this->pop();
	
	int sub = y - x;
	this->push(sub);
}

void postfixCalculator::multiply(){
	int x = this->top();
	this->pop();
	int y = this->top();
	this->pop();
	
	int mul = x * y;
	this->push(mul);
}

void postfixCalculator::divide(){
	int x = this->top();
	this->pop();
	int y = this->top();
	this->pop();
	
	int div = y / x;
	this->push(div);
}

void postfixCalculator::negate(){
	int x = this->top();
	this->pop();
	x = -x;
	this->push(x);
}

void postfixCalculator::read(){
	while(cin.good()){
		string t;
		cin >> t;

		if(t.size()==1){
			if(t[0]=='+'){
				add();
				continue;
			}
			if(t[0]=='-'){
				substract();
				continue;
			}
			if(t[0]=='*'){
				multiply();
				continue;
			}
			if(t[0]=='/'){
				divide();
				continue;
			}
			if(t[0]=='~'){
				negate();
				continue;
			}
		}
			
		const char *x = t.c_str();
		int a = atoi(x);
		this->push(a);
	}
	
//	cout << this->top() << endl;
}