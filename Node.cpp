#include "Node.h"
#include "Vector.h"
#include <iostream>

//Node::Node(){     //Construit par défaut sur null
//	next = nullptr;
//	obj = nullptr;
//}

Node::Node(const Vector& vect){            //construit à partir d'un vecteur
	next = nullptr;
	Vector* ptob = new Vector(vect);        //Passage par le heap pour stockage
	obj = ptob;															// /!\Delete dans destructeur 
}

Node* Node::get_next(){ //getter du Node pointé par next
	return next;
}

Vector Node::get_obj(){ //getteur de l'objet pointé par obj
	return *obj;
}

void Node::set_obj(Vector& v){ //setteur lien entre Node et Vector
	obj = &v;
}
