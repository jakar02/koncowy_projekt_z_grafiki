#pragma once

#define _USE_MATH_DEFINES

#include <cmath>
#include "GUI.h"

class Matrix
{
public :
	Matrix();
	double& operator()(int x, int y);
private :
	double data[4][4];
};

class Vector 
{
public:
	Vector();
	double& operator()(int x);
private:
	double data[4];
};

Matrix operator*(Matrix m1, Matrix m2);

Vector operator*(Matrix m, Vector v);

Matrix Matrix_RotationX(double alpha);

Matrix Matrix_RotationY(double alpha);

Matrix Matrix_RotationZ(double alpha);

Matrix Matrix_Translation(double dx, double dy, double dz);

Matrix Matrix_Scale(double sx, double sy, double sz);

wxPoint point_cast(Vector v, double w, double h);