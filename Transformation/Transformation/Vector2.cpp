#include "Vector2.h"


//----------------CONSTRUCTORS-------------------
Vector2::Vector2(double x1, double y1) :
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
