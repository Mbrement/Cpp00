#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

public :
	Fixed ();
	Fixed (const int value);
	Fixed (const float value);
	Fixed (const Fixed &Fixed);
	~Fixed();
	Fixed	&operator=(const Fixed &Fixed);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private	:
	int 	fractional;
	int		rawInt;
};
	std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
#endif