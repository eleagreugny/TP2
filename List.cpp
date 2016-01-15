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
  if (nb_elts_ >1){ //vérifie l'element suivant n'est pas nul
	  while((*cur).get_next() != nullptr){
		  cur = (*cur).get_next();
	  }
	  (*cur).set_next(ptrnode) ;
   
  }
  else{ // si on a juste un elmt dans la liste, on l'ajout directement
    (*cur).set_next(ptrnode) ;
  }
  nb_elts_+=1;
}
    

void List::PopBack(){
	Node* ptrcur = head_; //pointe sur le suivant
	Node* cur = head_;            //pointe sur le courant
	while((*ptrcur).get_next() != nullptr){
		cur = ptrcur ;
		ptrcur = (*ptrcur).get_next();
	}
}
