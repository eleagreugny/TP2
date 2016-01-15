#include "Node.h"
#include "Vector.h"
#include "List.h"
#include <iostream>
#include <cstdlib>
#include <cassert>

using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	cout<<"Hello"<<endl;
	//Node no = Node();
	Vector v1 = Vector(2,3);
  Node n3(v1);
	//no.set_obj(v1);
	
	return EXIT_SUCCESS;
	
}
