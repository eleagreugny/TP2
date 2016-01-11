
#ifndef VECTOR_H__
#define VECTOR_H__

class Vector{
	protected:
	//attributs
	float x;
	float y;
	float norm;
	
	public:
	//méthode
	float get_x();
	float get_y();
	float get_norm();
	
	//Constructeurs
	Vector add(const Vector V1);
	Vector();
	Vector(const Vector& model);
	Vector(const float a, const float b);
	//Destructeur
	~Vector()= default;
	
	private:
};

#endif

