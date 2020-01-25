// MathVectorConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Vector3d.h"

int main()
{
    //Dummy tests
    MathVector::Vector3d v1 =  MathVector::Vector3d(1, 1, 0);
    MathVector::Vector3d v2 = MathVector::Vector3d(1, 2, 0);
    MathVector::Vector3d v3 = MathVector::Vector3d(v1);   

    MathVector::Vector3d v2v1 = v1 - v2;
    MathVector::Vector3d v1v2multiplication = v1 * v2;
    MathVector::Vector3d v1v2division = v1 / v2;
    MathVector::Vector3d v1scale = v1 * 5;
    MathVector::Vector3d v1small = v1 / 2;

    v1+=v2;
    v3 *= v1;

    v1.setX(5);
    float v1Length = v1.length();
    float v1sqrLength = v1.sqrLength();
    v1.normalize();
    float dot = v3.dotProduct(v2);
    MathVector::Vector3d cross = v3.crossProduct(v2);

}
