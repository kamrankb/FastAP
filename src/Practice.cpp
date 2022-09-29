//============================================================================
// Name        : Practice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TwoD.h"
#include "ThreeD.h"
#include<cmath>

using namespace std;

int main() {
	double p1X,p1Y,p1Z;
	double p2X,p2Y,p2Z;
	double distance;

	std::cout << "Please enter the XYZ coordinates for the first point:" << endl;
	std::cin >> p1X;
	std::cin >> p1Y;
	std::cin >> p1Z;

	ThreeD point1(p1X, p1Y, p1Z);

	//	Setting Three Dimensional array axis
	point1.setX(p1X);
	point1.setY(p1Y);
	point1.setZ(p1Z);

	std::cout << "Please enter the XYZ coordinates for the second point:" << endl;
	std::cin >> p2X;
	std::cin >> p2Y;
	std::cin >> p2Z;

	ThreeD point2(p2X, p2Y, p2Z);

	//	Setting Three Dimensional array axis
	point2.setX(p2X);
	point2.setY(p2Y);
	point2.setZ(p2Z);


	std::cout << "Coordinates of First Point are:" <<endl;
	std::cout << point1.getX() << ", " << point1.getY() <<", " << point1.getZ()<< endl;

	std::cout << "Coordinates of Second Point are:" <<endl;
	std::cout << point2.getX() << ", " << point2.getY() <<", " << point2.getZ()<< endl;


	distance = sqrt(pow(p2X-p1X, 2) + pow(p2Y-p1Y, 2) + pow(p2Z-p1Z, 2));
	std::cout << "Distance between two points is :" << distance <<endl;

	return 0;
}
