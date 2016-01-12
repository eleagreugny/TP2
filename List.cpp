#include "Node.h"
#include "Vector.h"
#include <iostream>

List::List(const Node& n){
	head_ = &n;
	nb_elts_ = 1;
}

void List::Insert(const Node& nIns, const Node& nCur){
	Node* cur = head;
	while(cur.get_next() != &nCur){
		cur = *cur.get_next();
	}
	//nCur.get_next() = 
}

void List::PushBack(const Node& n){
	Node* cur = head;
	while(*cur.next != nullptr){
		cur = *cur.next;
	}
	*cur.next = &n ;
}
