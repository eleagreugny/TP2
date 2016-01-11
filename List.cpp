#include "Node.h"
#include "Vector.h"
#include <iostream>

List::List(const Node& n){
	head_ = &n;
	nb_elts_ = 1;
}

void List::PushBack(const Node& n){
	Node* cur = head;
	while(*cur.next != nullptr){
		cur = *cur.next;
	}
	*cur.next = &n ;
}
