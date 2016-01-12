#ifndef NODE_H__
#define NODE_H__
#ifndef LIST_H__
#define LIST_H__
#include "Vector.h"
#include <iostream>

List::List(const Vector& v){
	Node* ptrnode = new Node(v);
	head_ = ptrnode;
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
#endif
#endif
