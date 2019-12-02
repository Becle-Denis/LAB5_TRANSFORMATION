#include <iostream>
#include <string>
#include "Matrix3.h"
#include "Vector3.h"
#include "Vector2.h"


int main()
{
	Vector2 testV2(3,4);
	Vector3 testV3(3,4,5);
	std::cout << "----------------VECTOR 2 -----------------------" << std::endl;
	std::cout << testV2.toString() << std::endl;
	std::cout << "Lenght : " << std::to_string(testV2.length()) << std::endl;
	std::cout << "Squared Lenght : " << std::to_string(testV2.lenghtSquared()) << std::endl;
	testV2.normalise();
	std::cout << "Normalized" << std::endl;
	std::cout << testV2.toString()  << std::endl;
	std::cout << "Lenght : " << std::to_string(testV2.length()) << std::endl << std::endl;

	std::cout << "----------------VECTOR 3-----------------------" << std::endl;
	std::cout << testV3.toString() << std::endl;
	std::cout << "Lenght : " << std::to_string(testV3.length()) << std::endl;
	std::cout << "Squared Lenght : " << std::to_string(testV3.lenghtSquared()) << std::endl;
	testV3.normalise();
	std::cout << "Normalized" << std::endl;
	std::cout << testV3.toString() << std::endl;
	std::cout << "Lenght : " << std::to_string(testV3.length()) << std::endl << std::endl;

	Vector2 op1;
	Vector2 op2;
	Vector2 op3;

	Vector3 opB1;
	Vector3 opB2;
	Vector3 opB3;

	std::cout << "----------------VECTOR 2 OPERATIONS-----------------------" << std::endl;
	
	//VECTOR 2 
	//  + 
	op1 = Vector2(5, 3);
	op2 = Vector2(-4, 12); 
	std::cout << "A = " << op1.toString() << std::endl;
	std::cout << "B = " << op2.toString() << std::endl;
	op3 = op1 + op2;
	std::cout << "A + B = " << op3.toString() << std::endl << std::endl;

	// - 
	op1 = Vector2(5, 3);
	op2 = Vector2(-4, 12);
	std::cout << "A = " << op1.toString() << std::endl;
	std::cout << "B = " << op2.toString() << std::endl;
	op3 = op1 - op2;
	std::cout << "A - B = " << op3.toString() << std::endl << std::endl;

	// -X
	op1 = Vector2(5, 3);
	std::cout << "A = " << op1.toString() << std::endl;
	op3 = -op1;
	std::cout << "- A = " << op3.toString() << std::endl << std::endl;

	// * 
	op1 = Vector2(5, 3);
	op2 = Vector2(-4, 12);
	std::cout << "A = " << op1.toString() << std::endl;
	std::cout << "B = " << op2.toString() << std::endl;
	op3 = op1 * op2;
	std::cout << "A * B = " << op3.toString() << std::endl << std::endl;

	// * x
	op1 = Vector2(5, 3);
	op2 = Vector2(-4, 12);
	std::cout << "A = " << op1.toString() << std::endl;
	op3 = 3 * op1;
	std::cout << "3 * A = " << op3.toString() << std::endl << std::endl;

	std::cout << "----------------VECTOR 3 OPERATIONS-----------------------" << std::endl;
	//VECTOR 3
	//  + 
	opB1 = Vector3(5, 3, 12);
	opB2 = Vector3(-4, 12, 9);
	std::cout << "A = " << opB1.toString() << std::endl;
	std::cout << "B = " << opB2.toString() << std::endl;
	opB3 = opB1 + opB2;
	std::cout << "A + B = " << opB3.toString() << std::endl << std::endl;

	// - 
	opB1 = Vector3(5, 3, 12);
	opB2 = Vector3(-4, 12, 9);
	std::cout << "A = " << opB1.toString() << std::endl;
	std::cout << "B = " << opB2.toString() << std::endl;
	opB3 = opB1 - opB2;
	std::cout << "A - B = " << opB3.toString() << std::endl << std::endl;

	// -X
	opB1 = Vector3(5, 3, 12);
	std::cout << "A = " << opB1.toString() << std::endl;
	opB3 = -opB1;
	std::cout << "- A = " << opB3.toString() << std::endl << std::endl;

	// * 
	opB1 = Vector3(5, 3, 12);
	opB2 = Vector3(-4, 12, 9);
	std::cout << "A = " << opB1.toString() << std::endl;
	std::cout << "B = " << opB2.toString() << std::endl;
	opB3 = opB1 * opB2;
	std::cout << "A * B = " << opB3.toString() << std::endl << std::endl;

	// * x
	opB1 = Vector3(5, 3, 12);
	std::cout << "A = " << opB1.toString() << std::endl;
	opB3 = 3 * opB1;
	std::cout << "3 * A = " << opB3.toString() << std::endl << std::endl;

	// ^ 
	opB1 = Vector3(5, 3, 12);
	opB2 = Vector3(-4, 12, 9);
	std::cout << "A = " << opB1.toString() << std::endl;
	std::cout << "B = " << opB2.toString() << std::endl;
	opB3 = opB1 ^ opB2;
	std::cout << "A ^ B = " << opB3.toString() << std::endl << std::endl;

	std::cout << "----------------MATRIX 3-----------------------" << std::endl;

	Matrix3 m(2, 5, 8, 6, 9, 7, 4, 10, -20);
	std::cout << m.toString() << std::endl;
	std::cout << "Determinant :";
	std::cout << "\t" << std::to_string(Matrix3::determinant(m)) << std::endl << std::endl;
	std::cout << "Transposed :"; 
	std::cout << "\t" << Matrix3::transpose(m).toString() << std::endl << std::endl;
	std::cout << "Inversed :";
	std::cout << "\t" << Matrix3::inverse(m).toString() << std::endl << std::endl;
	std::cout << "New Rotation 60 :";
	std::cout << "\t" << Matrix3::rotation(60).toString() << std::endl << std::endl;
	std::cout << "New Translate 10 20 :";
	std::cout << "\t" << Matrix3::translate(10,20).toString() << std::endl << std::endl;
	std::cout << "New Scale 5 -3 :";
	std::cout << "\t" << Matrix3::scale(5, -3).toString() << std::endl << std::endl;
	std::cout << "New Rotation X 20 :";
	std::cout << "\t" << Matrix3::rotationX(20).toString() << std::endl << std::endl;
	std::cout << "New Rotation Y 20 :";
	std::cout << "\t" << Matrix3::rotationY(20).toString() << std::endl << std::endl;
	std::cout << "New Rotation Z 20 :";
	std::cout << "\t" << Matrix3::rotationZ(20).toString() << std::endl << std::endl;
	std::cout << "New Scale 3D 7 :";
	std::cout << "\t" << Matrix3::scale3D(7).toString() << std::endl << std::endl;

	std::cout << "----------------MATRIX 3 OPERATIONS-----------------------" << std::endl;
	Matrix3 m1;
	Matrix3 m2;
	Matrix3 m3;

	//Matrix 3
	//  + 
	std::cout << "----- A + B ----" << std::endl;
	m1 = Matrix3(5, 3, 8, 3, 4, -6, 1, 5, 8);
	m2 = Matrix3(-4, 2, 6, 12, 3, 0, 2, 4, 2);
	std::cout << "A = " << m1.toString() << std::endl;
	std::cout << "B = " << m2.toString() << std::endl;
	m3 = m1 + m2;
	std::cout << "A + B = " << m3.toString() << std::endl << std::endl;

	//  -
	std::cout << "----- A - B ----" << std::endl;
	m1 = Matrix3(5, 3, 8, 3, 4, -6, 1, 5, 8);
	m2 = Matrix3(-4, 2, 6, 12, 3, 0, 2, 4, 2);
	std::cout << "A = " << m1.toString() << std::endl;
	std::cout << "B = " << m2.toString() << std::endl;
	m3 = m1 - m2;
	std::cout << "A - B = " << m3.toString() << std::endl << std::endl;

	//  - X 
	std::cout << "-----  - A ----" << std::endl;
	m1 = Matrix3(5, 3, 8, 3, 4, -6, 1, 5, 8);
	std::cout << "A = " << m1.toString() << std::endl;
	m3 =  - m1 ;
	std::cout << "- A = " << m3.toString() << std::endl << std::endl;

	//  * float
	std::cout << "----- A * float ----" << std::endl;
	m1 = Matrix3(5, 3, 8, 3, 4, -6, 1, 5, 8);
	std::cout << "A = " << m1.toString() << std::endl;
	m3 = m1 * 3.5;
	std::cout << "A * 3.5 = " << m3.toString() << std::endl << std::endl;

	//  Vector * Matrix
	std::cout << "----- A(Vector3) * B(Matrix3) ----" << std::endl;
	Vector3 ans;
	Vector3 vm1 = Vector3(-4, 2, 6);
	m2 = Matrix3(5, 3, 8, 3, 4, -6, 1, 5, 8);
	std::cout << "A = " << vm1.toString() << std::endl;
	std::cout << "B = " << m2.toString() << std::endl;
	ans = vm1 * m2;
	std::cout << "A * B = " << ans.toString() << std::endl << std::endl;




	return 0;
}