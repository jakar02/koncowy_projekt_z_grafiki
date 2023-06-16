#include "Geometry.h"

Line::Line(double x1, double y1, double z1, double x2, double y2, double z2)
{
	begin(0) = x1; begin(1) = y1; begin(2) = z1;
	end(0) = x2; end(1) = y2; end(2) = z2;
}

Sphere::Sphere(double x, double y, double z, double r)
{
	center(0) = x; center(1) = y; center(2) = z;
	radius = r;
}