#include "Vector.h"
#ifndef NODE_H__
#define NODE_H__

class List{
	
 protected :
 //attributs
	Node* head_;
	int nb_elts_;
	 
 public:
	List(const Vector& n);

 private:
	void Insert(const Node& n);
//methodes
	void PushBack(const Node& n); //ajoute un element a la fin de la liste

};

#endif
