#include "Vector.h"
#include <math.h>

Vector::Vector(){
	x = 0;
	y = 0;
	norm = 0;
}

Vector::Vector(const Vector& model){
	x = model.x;
	y = model.y;
	norm = model.norm;
}

Vector::Vector(const float a, const float b){
	x = a;
	y= b;
	norm = sqrt(a*a + b*b);

}

float Vector ::get_x(){
	return x;
}

float Vector ::get_y(){
	return y;
}

float Vector ::get_norm(){
	return norm;
}

Vector Vector::add(const Vector v1){
	x += v1.x;
	y += v1.y;
	norm = sqrt(x*x+y*y);
	}
