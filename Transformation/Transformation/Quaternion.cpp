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

void Quaternion::fromAxisAngle(Vector3 axis, float angleRadians)
{
	float m = axis.length();
	if (m > 0.0001)
	{
		double ca = cos(angleRadians / 2);
		double sa = sin(angleRadians / 2);
		x = axis.x / m * sa;
		y = axis.y / m * sa;
		z = axis.z / m * sa;
		w = ca;
	}
	else
	{
		w = 1; x = 0; y = 0; z = 0;
	}
}

Quaternion Quaternion::multiply(Quaternion q) const
{
	float nw = q.w * w - q.x * x - q.y * y - q.z * z;
	float nx = q.w * x + q.x * w + q.y * z - q.z * y;
	float ny = q.w * y + q.y * w + q.z * x - q.x * z;
	float nz = q.w * z + q.z * w + q.x * y - q.y * x;
	return Quaternion(nw, nx, ny, nz);
}

Quaternion Quaternion::copy() const
{
	return Quaternion(x,y,z,w);
}

Vector3 Quaternion::rotate(Vector3 pt, int angle) const
{
	Quaternion axis, rotate;
	axis = normalise();
	double angleRad = 3.141592653589793 / 180 * angle;
	rotate = Quaternion(cos(angleRad / 2), sin(angleRad / 2) * axis.x, sin(angleRad / 2) * axis.y, sin(angleRad / 2) * axis.z);
	Quaternion conjugate = rotate.conjugate();
	Quaternion qNode = Quaternion(0, pt.x, pt.y, pt.z);
	qNode = rotate * qNode * conjugate;
	return Vector3(qNode.x, qNode.y, qNode.z);
}

Quaternion operator*(Quaternion const& q1, Quaternion const& q2)
{
	float nw = q1.w * q2.w - q1.x * q2.x - q1.y * q2.y - q1.z * q2.z;
	float nx = q1.w * q2.x + q1.x * q2.w + q1.y * q2.z - q1.z * q2.y;
	float ny = q1.w * q2.y + q1.y * q2.w + q1.z * q2.x - q1.x * q2.z;
	float nz = q1.w * q2.z + q1.z * q2.w + q1.x * q2.y - q1.y * q2.x;
	return Quaternion(nw, nx, ny, nz);
}

Quaternion operator+(Quaternion const& q1, Quaternion const& q2)
{
	return Quaternion(q1.w + q2.w, q1.x + q2.x, q1.y + q2.y, q1.z + q2.z);
}

