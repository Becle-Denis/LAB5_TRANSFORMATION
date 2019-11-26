#include "Vector2.h"


//----------------CONSTRUCTORS-------------------
Vector2::Vector2(float x1, float y1) :
	x(x1),y(y1)
{

}

Vector2::Vector2(Vector2 const& ext) :
	x(ext.x), y(ext.y)
{

}

Vector2::Vector2(Vector3 const& ext) :
	x(ext.x), y(ext.y)
{

}

float Vector2::length() const
{
	return (float) sqrt(lenghtSquared());
}

float Vector2::lenghtSquared() const
{
	return x * x + y * y ;
}

std::string Vector2::toString()
{
	return "Vector2 x: " + std::to_string(x) + " y: " + std::to_string(y);
}
