#pragma once
#include <string>

class Vector3; // further decalaration

class Vector2
{
public: //Attributes 

	float x{ 0.0 };
	float y{ 0.0 };

public: //functions 

	//CONSTRUCTORS
	// empty constructor 
	Vector2() = default;

	// constructor with 3 values 
	Vector2(float x1, float y1);

	// copy connstructor
	Vector2(Vector2 const&);

	// Constructor with vector 3
	Vector2(Vector3 const&);

	//OTHER
	float length() const;

	float lenghtSquared() const;

	//Reduce the length to 1
	void normalise();

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
	friend Vector2 operator*(float k, Vector2 const& v1);

	//Product of a scalat by a vector
	friend Vector2 operator*(int k, Vector2 const& v1);

	//vector product of 2 vectors
	friend Vector2 operator^ (Vector2 const& v1, Vector2 const& v2);
};

#include "Vector3.h"

