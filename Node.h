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
	Node()=delete; //On enleve les constructeurs par défaut et par copie car incoherent
	Node(const Node&)= delete;
	Node(const Vector& vect);     //Definition a partir d'un vecteur (par reference)
	
	//Méthodes
	Node* get_next();              // renvoie l'objet pointé par next
	Vector get_obj();             // renvoie l'objet pointé par obj
	void set_obj(Vector& v); //lien Node à Vecteur
	
 private:

};

#endif
