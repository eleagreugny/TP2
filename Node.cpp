#include "Node.h"
#include "Vector.h"
#include <iostream>

Node::Node(){     //Construit par défaut sur null
	next = nullptr;
	obj = nullptr;
}

Node::Node(const Vector& vect){            //construit à partir d'un vecteur
	next = nullptr;
	Vector* ptob = new Vector(vect);        //Passage par le heap pour stockage
	obj = ptob;															// /!\Delete dans destructeur 
}

Node Node::get_next(){
	return *next;
}

Node Node::get_obj(){
	return *obj;
}
