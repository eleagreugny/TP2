#include "Vector.h"
#include "Node.h"
#include "List.h"
#include <iostream>

List::List(const Vector& v){
	Node* ptrnode = new Node(v);
	head_ = ptrnode;
	nb_elts_ = 1;
}

void List::Insert(const Node& nIns, const Node& nCur){
	Node* cur = head_;
	while((*cur).get_next() != &nCur){
		cur = (*cur).get_next();
	}
	//nCur.get_next() = 
}

void List::PushBack(Vector& V){
	Node* ptrnode = new Node(V);
	Node* cur = head_;
	while((*cur).get_next() != nullptr){
		cur = (*cur).get_next();
	}
	(*cur).set_next(ptrnode) ;
}

