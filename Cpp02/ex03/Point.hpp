
#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point {
	private:
		const Fixed *x;
		const Fixed *y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point &toCopy);
		~Point();

	Point	&operator=(const Point &point);

	const Fixed	&getX() const;
	const Fixed	&getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
