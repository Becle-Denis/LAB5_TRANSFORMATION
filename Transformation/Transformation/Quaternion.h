#pragma once
#include "Vector3.h"
class Quaternion
{
private:
	float x{ 0 };
	float y{ 0 };
	float z{ 0 };
	float w{ 0 };

public:
	Quaternion() = default;

	Quaternion(float x1, float y1, float z1, float w1);

	Quaternion(float w1, Vector3 v);

	std::string toString();

	float modulus();

};

