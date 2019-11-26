#include <iostream>
#include <string>
#include "Matrix3.h"
#include "Vector3.h"
#include "Vector2.h"


int main()
{
	std::cout << "hey" << std::endl;
	Matrix3 testM3;
	Vector2 testV2(3,4);
	Vector3 testV3(3,4,5);
	
	std::cout << testV2.toString() << std::endl;
	std::cout << "Lenght : " << std::to_string(testV2.length()) << std::endl;
	std::cout << "Squared Lenght : " << std::to_string(testV2.lenghtSquared()) << std::endl;
	testV2.normalise();
	std::cout << "Normalized" << std::endl;
	std::cout << testV2.toString()  << std::endl;
	std::cout << "Lenght : " << std::to_string(testV2.length()) << std::endl << std::endl;


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

	std::cout << "OPEARATIONS" << std::endl;
	
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


	return 0;
}