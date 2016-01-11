#include "Vector.h"

#ifndef NODE_H__
#define NODE_H__

class Node{
	
 protected :
 //attributs
	Node* next;
	Vector* obj;
	 
 public:
 //Constructeurs
	Node();
	Node(const Vector& vect);     //Definition a partir d'un vecteur (par reference)
	
	//Méthodes
	Node get_next();              // renvoie l'objet pointé par next
	Vector get_obj();             // renvoie l'objet pointé par obj
 private:

};

#endif
