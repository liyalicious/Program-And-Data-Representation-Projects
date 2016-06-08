#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;


int main () {
  /*Size of C++ data types*/
  //  cout << "Max int: " << INT_MAX << endl;
  //  cout << "Max unsigned int: " << UINT_MAX << endl;
  //  cout << "Max float: " << FLT_MAX << endl;
  //  cout << "Max double: " << DBL_MAX << endl;
  //  cout << "Max char: " << CHAR_MAX << endl;

	int i = 0;
	int i2 = 1;
	unsigned int ui = 0;
	unsigned int ui2 = 1;
	float f = 0;
	float f2 = 1;
	double d = 0;
	double d2 = 1.0;
	char c ='0';
	char c2 = '1';
	bool b = false;
	bool b2 = true;
	int* ai = NULL;
	char* ac = NULL;
	double* ad = NULL;


	cout<<i<< endl;
	cout<<i2<<endl;
	cout<<ui<<endl;
	cout<<ui2<<endl;
	cout<<f<<endl;
	cout<<f2<<endl;
	cout<<d<<endl;
	cout<<d2<<endl;
	cout<<c<<endl;
	cout<<c2<<endl;
	cout<<b<<endl;
	cout<<b2<<endl;
	//cout<<ai<<endl;
	//cout<<ac<<endl;
	//cout<<ad<<endl;



	/*Primitive Arrays in C++*/
	
	int IntArray[10];
	char CharArray[10];
	int IntArray2D[6][5];
	char CharArray2D[6][5];
	/*
	for(int i=0;i<sizeof(IntArray);i++) { 
	    IntArray[i] = i; 
	  } 

	for(int i=0;i<sizeof(CharArray);i++) {
		CharArray[i] = 'a';
	}*/

	for(int i=0;i<6;i++){
		for(int j=0;j<5;j++){
			IntArray2D[i][j]=j;
			cout<<&IntArray2D[i][j]<<" ";
		}
		cout <<endl;
	}

	for(int i=0;i<6;i++){
		for(int j=0;j<5;j++){
			CharArray2D[i][j]='a';
			cout<<&CharArray2D[i][j]<<" ";
		}
		cout<<endl;
	}
	

  return 0;
}
