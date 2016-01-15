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

void List::PopBack(){
	Node* suiv = head_; //pointe sur le suivant
	Node* cur = head_;            //pointe sur le courant
	if(head_ != nullptr) {			//vérifie que la liste n'est pas vide
		if( (*head_).get_next() != nullptr) { //vérifie qu'il y a plus d'un éléments dans la liste
			while((*suiv).get_next() != nullptr){
				cur = suiv ;
				suiv = (*suiv).get_next();
			}
			(*cur).set_next(nullptr);
			nb_elts_ -= 1 ;
		} else {
			head_=nullptr ;
			nb_elts_ -= 1 ;
		} 
	} else {
		std :: cout << "La liste est déja vide !" << std :: endl ;
	}
}
