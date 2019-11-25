#pragma once

class Vector3;  //further declaration

/// <summary>
/// Class to represent a matrix with 3 column and 3 rows
/// </summary>
class Matrix3
{
public: 
	//ATTRIBUTES 
	double a11{ 0.0 };
	double a12{ 0.0 };
	double a13{ 0.0 };

	double a21{ 0.0 };
	double a22{ 0.0 };
	double a23{ 0.0 };

	double a31{ 0.0 };
	double a32{ 0.0 };
	double a33{ 0.0 };

	//FUNCTIONS
	
	//CONSTRUCTORS 
	/// <summary>
	/// Empty constructor;
	/// </summary>
	Matrix3() = default;

	/// <summary>
	/// Constructor with 3 vectors 
	/// </summary>
	/// <param name="row1">Row1</param>
	/// <param name="row2">Row2</param>
	/// <param name="row3">Row3</param>
	Matrix3(Vector3 row1, Vector3 row2, Vector3 row3);

	/// <summary>
	/// Constructor with 9 values 
	/// </summary>
	Matrix3(double a11, double a12, double a13, double a21, double a22, double a23, double a31, double a32, double a33);

	/* Static operator issue 
	//OPERATOR 
	//Product of a matrix by a vector 
	static Vector3 operator* (Matrix3 m1, Vector3 v1);

	//Product of a vector by a matrix
	static Vector3 operator*  (Vector3 v1, Matrix3 m1);

	//sum 2 matrix
	static Matrix3 operator+ (Matrix3 m1, Matrix3 m2);

	//difference of 2 matrix
	static Matrix3 operator- (Matrix3 m1, Matrix3 m2);

	//product of a matrix by a scalar
	static Matrix3 operator* (double x, Matrix3 m1);

	//Product of 2 matrix
	static Matrix3 operator* (Matrix3 m1, Matrix3 m2);

	static Matrix3 operator- (Matrix3 m1);
	*/

	//OTHER 
	//Transpose the given Matrix and return it
	static Matrix3 transpose(Matrix3 m1);

	//return the determinat of the given matrix 
	static double determinant(Matrix3 m1);

	//return the selected row as a vector3 
	Vector3 row(int i);

	// return the selected column as a vector3 
	Vector3 column(int i);

	//return the inverse of a matrix if exist, 
	static Matrix3 inverse(Matrix3 m1);

	static Matrix3 rotation(int angleDEG);

	static Matrix3 translate(int dx, int dy);

	static Matrix3 scale(int dx, int dy);

	static Matrix3 rotationX(int angleDEG);

	static Matrix3 rotationY(int angleDEG);

	static Matrix3 rotationZ(int angleDEG);

	static Matrix3 scale3D(int dx);
};
#include "Vector3.h"
