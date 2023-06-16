#include "Algebra.h"

Matrix::Matrix() 
{
	data[0][0] = 0.0; data[0][1] = 0.0; data[0][2] = 0.0; data[0][3] = 0.0;
	data[1][0] = 0.0; data[1][1] = 0.0; data[1][2] = 0.0; data[1][3] = 0.0;
	data[2][0] = 0.0; data[2][1] = 0.0; data[2][2] = 0.0; data[2][3] = 0.0;
	data[3][0] = 0.0; data[3][1] = 0.0; data[3][2] = 0.0; data[3][3] = 1.0;
}

double& Matrix::operator()(int x, int y)
{
	return data[x][y];
}

Vector::Vector()
{
	data[0] = 0.0; data[1] = 0.0; data[2] = 0.0; data[3] = 1.0;
}

double& Vector::operator()(int x)
{
	return data[x];
}

Matrix operator*(Matrix m1, Matrix m2) 
{
	Matrix result;
	result(3, 3) = 0.0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				result(i, j) += m1(i, k) * m2(k, j);
			}
		}
	}
	return result;
}

Vector operator*(Matrix m, Vector v)
{
	Vector result;
	result(3) = 0.0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			result(i) += m(i, j) * v(j);
		}
	}
	return result;
}

Matrix Matrix_RotationX(double alpha) 
{
	Matrix result;
	result(0, 0) = 1.0;
	result(1, 1) = cos(alpha);
	result(1, 2) = -1 * sin(alpha);
	result(2, 1) = sin(alpha);
	result(2, 2) = cos(alpha);
	return result;
}

Matrix Matrix_RotationY(double alpha) 
{
	Matrix result;
	result(0, 0) = cos(alpha);
	result(0, 2) = sin(alpha);
	result(1, 1) = 1.0;
	result(2, 0) = -1 * sin(alpha);
	result(2, 2) = cos(alpha);
	return result;
}

Matrix Matrix_RotationZ(double alpha) 
{
	Matrix result;
	result(0, 0) = cos(alpha);
	result(0, 1) = -1 * sin(alpha);
	result(1, 0) = sin(alpha);
	result(1, 1) = cos(alpha);
	result(2, 2) = 1.0;
	return result;
}

Matrix Matrix_Translation(double dx, double dy, double dz)
{
	Matrix result;
	result(0, 0) = 1.0;
	result(0, 3) = dx;
	result(1, 1) = 1.0;
	result(1, 3) = dy;
	result(2, 2) = 1.0;
	result(2, 3) = dz;
	return result;
}

Matrix Matrix_Scale(double sx, double sy, double sz)
{
	Matrix result;
	result(0, 0) = sx;
	result(1, 1) = sy;
	result(2, 2) = sz;
	return result;
}

wxPoint point_cast(Vector v, double w, double h) 
{
	return wxPoint((v(0) / (3.0 + v(2))) * w + w / 2.0, (v(1) / (3.0 + v(2))) * h + h / 2.0); 
}