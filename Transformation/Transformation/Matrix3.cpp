#include "Matrix3.h"

Matrix3::Matrix3(Vector3 row1, Vector3 row2, Vector3 row3) : 
	a11(row1.x), a12(row1.y), a13(row1.z),
	a21(row2.x), a22(row2.y), a23(row2.z),
	a31(row3.x), a32(row3.y), a33(row3.z)
{

}

Matrix3::Matrix3(float a11, float a12, float a13, float a21, float a22, float a23, float a31, float a32, float a33) :
	a11(a11), a12(a12), a13(a13),
	a21(a21), a22(a22), a23(a23),
	a31(a31), a32(a32), a33(a33)
{

}
