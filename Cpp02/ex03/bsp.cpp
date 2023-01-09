#include "Point.hpp"

float sign (Point p1, Point p2, Point p3)
{
	return (p1.getX().getRawBits() - p3.getX().getRawBits()) * (p2.getY().getRawBits() - p3.getY().getRawBits()) -
		(p2.getX().getRawBits() - p3.getX().getRawBits()) * (p2.getY().getRawBits() - p3.getY().getRawBits());
}

bool PointInTriangle (Point pt, Point v1, Point v2, Point v3)
{
	float d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(pt, v1, v2);
	d2 = sign(pt, v2, v3);
	d3 = sign(pt, v3, v1);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (PointInTriangle(point, a, b, c));
}
