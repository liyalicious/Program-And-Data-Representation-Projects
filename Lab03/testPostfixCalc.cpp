/*
Liya Xu
lx2hy
testPostfixCalc.cpp
2014.02.06
*/

#include <stack>
#include <cstdlib>
#include <iostream>
#include "postfixCalculator.h"
using namespace std;

int main() {
    postfixCalculator p;
	// p.push(1512);
	// p.negate();
	// p.push(12);
	// p.negate();
	// p.push(2);
	// p.negate();
	// p.divide();
	// p.divide();
	// p.push(2);
	// p.negate();
	// p.divide();
	// p.push(3);
	// p.divide();
	
	// p.push(-1);
	// p.negate();
	// p.negate();
	// p.negate();
	//     cout << "Result is: " << p.top() << endl;
	//     return 0;
	
	p.read();
	cout << p.top() << endl;
}
