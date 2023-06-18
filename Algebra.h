#pragma once

#define _USE_MATH_DEFINES

#include <cmath>
#include "GUI.h"

class Matrix
{
public :
	Matrix();
	double& operator()(int x, int y);
	double operator()(int x, int y) const;
private :
	double data[4][4];
};

class Vector 
{
public:
	Vector();
	double& operator()(int x);
	double operator()(int x) const;
private:
	double data[4];
};

Matrix operator*(const Matrix& m1, const Matrix& m2);

Vector operator*(const Matrix& m, const Vector& v);

Matrix Matrix_RotationX(double alpha);

Matrix Matrix_RotationY(double alpha);

Matrix Matrix_RotationZ(double alpha);

Matrix Matrix_Translation(double dx, double dy, double dz);

Matrix Matrix_Scale(double sx, double sy, double sz);

wxPoint point_cast(const Vector& v, double w, double h);