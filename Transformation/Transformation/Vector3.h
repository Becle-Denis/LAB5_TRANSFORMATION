#pragma once
#include <string>

class Vector2; //further decalration

class Vector3
{
public: //attributes 

	double x{ 0.0 };
	double y{ 0.0 };
	double z{ 0.0 };


public: //functions

	//CONSTRUCTORS
	// empty constructor 
	Vector3() = default;

	// constructor with 3 values 
	Vector3(double x1, double y1, double z1);

	// copy connstructor
	Vector3(Vector3 const&);

	// constructor with vector2
	Vector3(Vector2 const&);

	//OTHER

	double length() const;

	double lenghtSquared() const;

	//Reduce the length to 1
	void Normalise();

	std::string toString();

	//OPERATOR
	//sum of 2 vectors
	friend Vector3 operator+(Vector3 const & v1, Vector3 const& v2);

	//diference of 2 vectors
	friend Vector3 operator-(Vector3 const& v1, Vector3 const& c2);

	//negative of vectors
	friend Vector3 operator-(Vector3 const& v1);

	//scalar product of 2 vectors
	friend Vector3 operator*(Vector3 const& v1, Vector3 const& v2);

	//product of a scalar by a vector
	friend Vector3 operator*(double k, Vector3 const& v1);

	//Product of a scalat by a vector
	friend Vector3 operator*(int k, Vector3 const& v1);

	//vector product of 2 vectors
	friend Vector3 operator^ (Vector3 const& v1, Vector3 const& v2);
};

#include "Vector2.h"

