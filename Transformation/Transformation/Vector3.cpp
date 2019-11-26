#include "Vector3.h"

Vector3::Vector3(float x1, float y1, float z1) : 
	x(x1), y(y1), z(z1)
{

}

Vector3::Vector3(Vector3 const& ext) :
	x(ext.x), y(ext.y), z(ext.z)
{

}

Vector3::Vector3(Vector2 const& ext) :
	x(ext.x), y(ext.y), z(0)
{

}

float Vector3::length() const
{
	return (float) sqrt(lenghtSquared());
}

float Vector3::lenghtSquared() const
{
	return x * x + y * y + z * z ;
}

void Vector3::normalise()
{
	float len = length();
	if (len != 0)
	{
		x = x / len;
		y = y / len;
		z = z / len;
	}
}

std::string Vector3::toString()
{
	return "Vector3 x: " + std::to_string(x) + " y: " + std::to_string(y) + " z: " + std::to_string(z);
}
