
#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point {
	private:
		Fixed x;
		Fixed y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		~Point();
		Point&  operator=(const Point &rhs);

		Fixed getX(void) const;
		Fixed getY(void) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
