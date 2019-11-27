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

void Vector2::normalise()
{
	float len = length();
	if (len != 0)
	{
		x = x / len;
		y = y / len;
	}
}

std::string Vector2::toString()
{
	return "Vector2 x: " + std::to_string(x) + " y: " + std::to_string(y);
}

Vector2 operator+(Vector2 const& v1, Vector2 const& v2)
{
	return Vector2(v1.x + v2.x, v1.y + v2.y);
}

Vector2 operator-(Vector2 const& v1, Vector2 const& v2)
{
	return Vector2(v1.x - v2.x, v1.y - v2.y);
}

Vector2 operator-(Vector2 const& v1)
{
	return Vector2() - v1;
}

Vector2 operator*(Vector2 const& v1, Vector2 const& v2)
{
	return Vector2(v1.x * v2.x,v1.y * v2.y);
}

Vector2 operator*(float k, Vector2 const& v1)
{
	return Vector2(v1.x * k, v1.y * k);
}

Vector2 operator*(int k, Vector2 const& v1)
{
	return Vector2(v1.x * k, v1.y * k);
}
