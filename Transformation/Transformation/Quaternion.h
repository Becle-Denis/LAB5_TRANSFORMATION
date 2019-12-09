#pragma once
#include "Vector3.h"

namespace db
{
	class Quaternion
	{
	private:
		float x{ 0 };
		float y{ 0 };
		float z{ 0 };
		float w{ 0 };

	public:
		//CONSTRUCTORS 
		Quaternion() = default;

		Quaternion(float x1, float y1, float z1, float w1);

		Quaternion(float w1, Vector3 v);


		//FUNCTIONS 
		std::string toString() const;

		float modulus() const;

		Quaternion normalise() const;

		Quaternion conjugate() const;

		void fromAxisAngle(Vector3 axis, float angleRadians);

		Quaternion multiply(Quaternion q) const;

		Quaternion copy() const;

		Vector3 rotate(Vector3 pt, int angle) const;


		//OPERATORS 
		friend Quaternion operator * (Quaternion const& q1, Quaternion const& q2);

		friend Quaternion operator + (Quaternion const& q1, Quaternion const& q2);

		friend Quaternion operator - (Quaternion const& q1);

		friend Quaternion operator - (Quaternion const& q1, Quaternion const& q2);
	};

}