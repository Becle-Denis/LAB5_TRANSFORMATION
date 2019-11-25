#pragma once

/// <summary>
/// Class to represent a matrix with 3 column and 3 rows
/// </summary>
class Matrix3
{
public: 
	//Attributes 
	double a11{ 0.0 };
	double a12{ 0.0 };
	double a13{ 0.0 };

	double a21{ 0.0 };
	double a22{ 0.0 };
	double a23{ 0.0 };

	double a31{ 0.0 };
	double a32{ 0.0 };
	double a33{ 0.0 };

	//functions
	/// <summary>
	/// Empty constructor;
	/// </summary>
	Matrix3() = default;
};

