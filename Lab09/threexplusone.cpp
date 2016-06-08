#include <iostream>
#include <string.h>
using namespace std;


int countStep(int x){

	if (x == 1){
		return 0;
	} else if(x%2 == 0){
		return 1 + countStep(x/2);
	} else {
		return 1 + countStep(3*x+1);
	}
}
	
int main(){
	cout << countStep(13) << endl;
	return 0;
}