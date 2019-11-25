#pragma once
#include <string>

class Vector3; // further decalaration

class Vector2
{
private: //Attributes 

	double x{ 0.0 };
	double y{ 0.0 };

public: //functions 

	//CONSTRUCTORS
	// empty constructor 
	Vector2() = default;

	// constructor with 3 values 
	Vector2(double x1, double y1);

	// copy connstructor
	Vector2(Vector2 const&);

	// Constructor with vector 3
	Vector2(Vector3 const&);

	//OTHER
	double length() const;

	double lenghtSquared() const;

	//Reduce the length to 1
	void Normalise();

	std::string toString();

	//OPERATOR
	//sum of 2 vectors
	friend Vector2 operator+(Vector2 const& v1, Vector2 const& v2);

	//diference of 2 vectors
	friend Vector2 operator-(Vector2 const& v1, Vector2 const& c2);

	//negative of vectors
	friend Vector2 operator-(Vector2 const& v1);

	//scalar product of 2 vectors
	friend Vector2 operator*(Vector2 const& v1, Vector2 const& v2);

	//product of a scalar by a vector
	friend Vector2 operator*(double k, Vector2 const& v1);

	//Product of a scalat by a vector
	friend Vector2 operator*(int k, Vector2 const& v1);

	//vector product of 2 vectors
	friend Vector2 operator^ (Vector2 const& v1, Vector2 const& v2);
};

#include "Vector3.h"

