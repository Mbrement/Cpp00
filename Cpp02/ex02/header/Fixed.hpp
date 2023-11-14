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

	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed	&operator=(const Fixed &Fixed);
	bool	operator>(const Fixed &Fixed);
	bool	operator<(const Fixed &Fixed);
	bool	operator>=(const Fixed &Fixed);
	bool	operator<=(const Fixed &Fixed);
	bool	operator==(const Fixed &Fixed);
	bool	operator!=(const Fixed &Fixed);
	Fixed	&operator+(const Fixed &Fixed);
	Fixed	&operator-(const Fixed &Fixed);
	Fixed	operator*(const Fixed &Fixed);
	Fixed	operator/(const Fixed &Fixed);

	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	static Fixed& min(Fixed &first, Fixed &second);
	static const Fixed& min(const Fixed &first, const Fixed &second);
	static Fixed& max(Fixed &first, Fixed &second);
	static const Fixed& max(const Fixed &first, const Fixed &second);

private	:
	int		_rawInt;
	int 	_fractional;
};
	std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
#endif