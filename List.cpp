#include "Node.h"
#include "Vector.h"
#include <iostream>

List::List(const Node& n){
	head_ = &n;
	nb_elts_ = 1;
}
