/*
Liya Xu
lx2hy
List.cpp
2014.01.28
*/

#include <iostream>
#include "List.h"
#include "ListItr.h"
using namespace std;

List::List(){
	head = new ListNode;
	tail = new ListNode;
    head->next=tail;
    tail->previous=head;
	count = 0;
}

List::List(const List& source){
    head=new ListNode;
    tail=new ListNode;
    head->next=tail;
    tail->previous=head;
    count=0;
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {
        insertAtTail(iter.retrieve());
        iter.moveForward();
    }
}

List::~List(){
	makeEmpty();
	delete head;
	delete tail;
}

List& List::operator=(const List& source) {
    if (this == &source)
        return *this;
    else {
        makeEmpty();
        ListItr iter(source.head->next);
        while (!iter.isPastEnd()) {
            insertAtTail(iter.retrieve());
            iter.moveForward();
        }
    }
    return *this;
}

bool List::isEmpty() const{
	if(count == 0){
		return true;
	}
	
	return false;
}

void List::makeEmpty(){
	ListItr *me = new ListItr(head->next);
	while(count != 0){
		me->moveForward();
		remove(me->current->previous->value);
	}
	
	head->next = tail;
	tail->previous = head;
}

ListItr List::first(){
	ListItr *firstItr = new ListItr(head);
	firstItr->moveForward();
	return *firstItr;
}

ListItr List::last(){
	ListItr *lastItr = new ListItr(tail);
	lastItr->moveBackward();
	return *lastItr;
}

void List::insertAfter(int x, ListItr position){
	ListNode *after = new ListNode();
	after->value = x;
	after->next = position.current->next;
	after->previous = position.current;
	after->previous->next = after;
	after->next->previous = after;
	count++;
}

void List::insertBefore(int x, ListItr position){
	ListNode *before = new ListNode();
	before->value = x;
	before->previous = position.current->previous;
	before->next = position.current;
	before->next->previous = before;
	before->previous->next = before;
	count++;
}

void List::insertAtTail(int x){
	ListNode *tailNode = new ListNode();
	ListItr *last = new ListItr(tail->previous);
	tailNode->value = x;
	tailNode->next = tail;
	tailNode->previous = (*last).current;
	tailNode->previous->next = tailNode;
	tailNode->next->previous = tailNode;
	count++;
}

void List::remove(int x){
	if (find(x).current!=NULL){
	ListItr remo1 = find(x);
	ListItr remo2 = NULL;
	remo2 = remo1;
	remo1.current->previous->next = remo1.current->next;
	remo2.current->next->previous = remo2.current->previous;
	delete remo1.current;
	count--;
}
	else{
		cout<<"no such element"<<endl;
	}
}

ListItr List::find(int x){
	ListItr *found = new ListItr(head);
	ListItr ret = NULL;
	
	while(!found->isPastEnd()){
		if (found->current->value ==x ){
			return *found;
		}
		found->moveForward();
	}
	
	return ret;
	
}

int List::size() const{
	return count;
}

void printList(List& source, bool direction){
	if(direction){
		ListItr print = source.first();
		while(!print.isPastEnd()){
			cout << print.retrieve() << endl;
			print.moveForward();
		}
	} else {
		ListItr p2 = source.last();
		while(!p2.isPastBeginning()){
			cout << p2.retrieve() << endl;
			p2.moveBackward();
		}
	}
}