#include "Vector.h"
#include "Node.h"
#include "List.h"
#include <iostream>

List::List(const Vector& v){
	Node* ptrnode = new Node(v);
	head_ = ptrnode;
	nb_elts_ = 1;
}

void List::Insert(const Vector& vectI, Vector& vectCur){
	Node* ptrnode = new Node(vectI);
	Node* cur = head_;
	while((*cur).get_obj() != vectCur){
		cur = (*cur).get_next();
	}
	(*ptrnode).set_next((*cur).get_next());
	(*cur).set_next(ptrnode);
	nb_elts_+=1;
}

void List::PushBack(Vector& V){
	Node* ptrnode = new Node(V);
	Node* cur = head_;
	while((*cur).get_next() != nullptr){
		cur = (*cur).get_next();
	}
	(*cur).set_next(ptrnode) ;
}

