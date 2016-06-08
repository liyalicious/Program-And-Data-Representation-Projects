/*
Liya Xu
lx2hy
bitCounter.cpp
2014.02.13
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int countOne(int n) {
	if(n == 0) {
		return 0;
	} else {
		return n%2 + countOne(n/2);
	}
}

int main (int argc, char **argv) {
	
	if(argc <= 1) {
		cout << "No Command-line Parameter!" << endl;
		exit(1);
	}
	
	cout << countOne(atoi(argv[1])) << endl;
	
	return 0;
}