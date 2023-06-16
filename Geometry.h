#pragma once

#include "GUI.h"
#include "Algebra.h"

struct Line 
{
	Line(double x1, double y1, double z1, double x2, double y2, double z2);
	Vector begin;
	Vector end;
};

struct Sphere
{
	Sphere(double x, double y, double z, double r);
	Vector center;
	double radius;
};

