
//Name: Ran Yang ry5ns
// Tuesday 11am CS 2150
#include "hashTable.h"
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>

using namespace std;

hashTable::hashTable(int len) {

  table = new vector<list<string>*>;

  size = getNextPrime(len);

  for (int i = 0; i< size; i++){
    table->push_back(new list<string>);
  }

}

hashTable::~hashTable(){
 delete table;
}

bool hashTable::search(string s) {
  
  list<string>* l = table->at(hash(s));
  
  list<string>:: iterator itr;
  
  itr = find (l->begin(), l->end(), s);
  
  return itr != l->end();
}

void hashTable::insert(string s) {
  table->at(hash(s))->push_back(s);
}

// int hashTable::hash(string s) const{
//   long int temp = 0;
//   for (int i = 0; i < s.size(); i++) {
//     temp = 37*temp^(s.c_str())[i];
//   }
//   return ((int)temp)%table->size() ;
// }

int hashTable::hash(string s) const{
	int temp = 0;
	for(int i = 0; i < s.size(); i++){
		temp += (s.c_str())[i];
	}
	
	return temp % table->size();
}



bool checkprime(unsigned int p) {
    if ( p <= 1 ) // 0 and 1 are not primes; the are both special cases
        return false;
    if ( p == 2 ) // 2 is prime
        return true;
    if ( p % 2 == 0 ) // even numbers other than 2 are not prime
        return false;
    for ( int i = 3; i*i <= p; i += 2 ) // only go up to the sqrt of p
        if ( p % i == 0 )
            return false;
    return true;
}

int getNextPrime (unsigned int n) {
    while ( !checkprime(++n) );
    return n; // all your primes are belong to us
}

