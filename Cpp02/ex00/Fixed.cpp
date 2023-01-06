#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_n = n.getRawBits();
	return ;
}

Fixed	&Fixed::operator=(const Fixed &n)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &n)
		return *(this);
	this->_n = n.getRawBits();
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
