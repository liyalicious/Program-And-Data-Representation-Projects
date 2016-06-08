/*
Liya Xu
lx2hy
prelab4.cpp
2014.02.10
*/

#include <iostream>
#include <string>
#include <climits>
using namespace std;

void sizeOfTest() {
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of boolean: " << sizeof(bool) << endl;
	cout << "Size of int* : " << sizeof(int*) << endl;
	cout << "Size of char* : " << sizeof(char*) << endl;
	cout << "Size of double* : " << sizeof(double*) << endl;
}

void outputBinary(unsigned int ui) {
	int digit = 0;
	string s = "";
	while(digit < 32){
		if(ui % 2 == 0){
			s = "0" + s;
		}
		if(ui % 2 == 1){
			s = "1" + s;
		}
		ui = ui/2;
		digit++;
	}
	
	cout << s << endl;
}

void overflow() {
	unsigned int u = UINT_MAX + 1;
	cout << u << endl;
	cout << "Because when you add 1 to the max value of the unsigned int, it would create a new bit at the top to store the value. The computer would throw away the top bit and keep the original number of bits, thus giving a zero as an answer." << endl;
}



int main() {
	sizeOfTest();
	unsigned int a;
	cout << "Please enter an unsigned integer: " << endl;
	cin >> a;
	outputBinary(a);
	overflow();
}