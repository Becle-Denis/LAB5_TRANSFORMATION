#pragma once
#include <string>
class Vector3
{
private: //attributes 

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

	/*
	//OPERATOR
	//sum of 2 vectors 
	static Vector3 operator+(Vector3 v1, Vector3 v2);

	//diference of 2 vectors 
	static Vector3 operator-(Vector3 v1, Vector3 c2);

	//negative of vectors 
	static Vector3 operator-(Vector3 v1);

	//scalar product of 2 vectors 
	static Vector3 operator*(Vector3 v1, Vector3 v2);

	//product of a scalar by a vector
	static Vector3 operator*(double k, Vector3 v1);

	//Product of a scalat by a vector 
	static Vector3 operator*(int k, Vector3 v1);

	//vector product of 2 vectors
	static Vector3 operator^ (Vector3 v1, Vector3 v2);
	*/

	//OTHER

	double length() const;

	double lenghtSquared() const;

	//Reduce the length to 1
	void Normalise();

	std::string toString();
};

