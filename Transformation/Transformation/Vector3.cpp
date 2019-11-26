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
