#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_n;
		static int const	_bits;

	public:
		Fixed();
		Fixed(const Fixed &n);
		~Fixed();

	Fixed	&operator=(const Fixed &n);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
