#include "Vector.h"
#ifndef LIST_H__
#define LIST_H__

class Node{
	
 protected :
 //attributs
	Node* head_;
	int nb_elts_;
	 
 public:
	List(const Node& n);

 private:
	void Insert(const Node& n);
//methodes
	void PushBack(const Node& n); //ajoute un element a la fin de la liste

};

#endif
