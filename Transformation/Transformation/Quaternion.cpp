#include "Quaternion.h"

Quaternion::Quaternion(float x1, float y1, float z1, float w1) 
	: x(x1), y(y1),z(z1),w(w1)
{
}

Quaternion::Quaternion(float w1, Vector3 v)
	: w(w1),x(v.x), y(v.y), z(v.z)
{
}

std::string Quaternion::toString() const
{
	return "Quaternion : x : " + std::to_string(x) + " , y : " + std::to_string(y) + " , z : " + std::to_string(z) + " , w : " + std::to_string(w);
}

float Quaternion::modulus() const
{
	return sqrt(w * w + x * x + y * y + z * z);
}

Quaternion Quaternion::normalise() const
{
	float m = w * w + x * x + y * y + z * z;
	if (m > 0.001)
	{
		m = sqrt(m);
		return Quaternion(w / m, x / m, y / m, z / m);
	}
	else
	{
		return Quaternion(1, 0, 0, 0);
	}
}

Quaternion Quaternion::conjugate() const
{
	return Quaternion(w, -x, -y, -z);
}




