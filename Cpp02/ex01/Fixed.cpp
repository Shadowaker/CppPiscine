#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = i * (1 << this->_bits);
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (1 << this->_bits));
	return ;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_n = fixed.getRawBits();
	return ;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return *(this);
	this->_n = fixed.getRawBits();
	return *(this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (((float)this->_n / (float)(1 << this->_bits)));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
