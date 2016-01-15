#include "Vector.h"
#include "Node.h"
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
	void Insert(const Vector& vectI, Vector& vectCur);
//methodes
	void PushBack(Vector& V); //crée un node à partir de V et ajoute un element a la fin de la liste
	void PopBack(); //supprime le dernier élément de la liste

};

#endif
