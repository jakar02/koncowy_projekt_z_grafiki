#pragma once

#include "GUI.h"
#include "Algebra.h"

struct Line 
{
	Line(double x1, double y1, double z1, double x2, double y2, double z2, int t);
	Vector begin;
	Vector end;
	int thickness;
};

struct Sphere
{
	Sphere(double x, double y, double z, double r, int t);
	Vector center;
	double radius;
	int thickness;
};

