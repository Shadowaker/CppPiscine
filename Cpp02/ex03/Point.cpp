#include "Point.hpp"

Point::Point()
{
	Fixed	_x(0);
	Fixed	_y(0);

	this->x = &_x;
	this->y = &_y;
}

Point::~Point()
{
	;
}

Point::Point(float x, float y)
{
	Fixed	_x(x);
	Fixed	_y(y);

	this->x = &_x;
	this->y = &_y;
}

Point::Point(const Point &toCopy)
{
	Fixed	_x(toCopy.x->getRawBits());
	Fixed	_y(toCopy.y->getRawBits());

	this->x = &_x;
	this->y = &_y;
}

const Fixed	&Point::getX() const
{
	return((*this->x));
}

const Fixed	&Point::getY() const
{
	return((*this->x));
}
