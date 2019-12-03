#include "Quaternion.h"

Quaternion::Quaternion(float x1, float y1, float z1, float w1) 
	: x(x1), y(y1),z(z1),w(w1)
{
}

Quaternion::Quaternion(float w1, Vector3 v)
	: w(w1),x(v.x), y(v.y), z(v.z)
{
}
