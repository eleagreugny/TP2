#include "Vector.h"
#ifndef LIST_H__
#define LIST_H__

class List{
	
 protected :
 //attributs
	Node* head_;
	int nb_elts_;
	 
 public:
	List(const Vector& n);

 private:
	void Insert(const Node& nIns, const Node& nCur);
//methodes
	void PushBack(Node& n); //ajoute un element a la fin de la liste

};

#endif
