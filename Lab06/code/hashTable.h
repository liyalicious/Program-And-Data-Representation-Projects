#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <math.h>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
	
class hashTable {

 public: 
  hashTable(int len);
  ~hashTable();
  void insert(string s);
  int hash(string s) const;
  vector<list<string>*> *table;
  int size;
  bool search(string s);

};
bool checkprime (int n);
int getNextPrime (unsigned int num);

#endif