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
	std::cout << "\t" << Matrix3::transpose(m).toString() << std::endl;


	return 0;
}