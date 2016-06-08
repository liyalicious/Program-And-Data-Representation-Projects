#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void generate(){
	for(int i = 0; i < 26; i++){
		char c = char(i+'a');
		cout << c << " ";
		cout << c << c << " ";
		cout << c << c << c << " ";
		cout << c << c << c << c << " ";
		cout << c << c << c << c << c << " ";
		cout << c << c << c << c << c << c << " ";
	}
	
}

int main(){
	generate();
	return 0;
}