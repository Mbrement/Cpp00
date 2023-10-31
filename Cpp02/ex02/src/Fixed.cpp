#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout <<  "Default constructor called" << std::endl;
	_fractional = 8;
	_rawInt = 0;
}

Fixed::Fixed(const int value)
{
	// std::cout <<  "Int constructor called" << std::endl;
	_fractional = 8;
	_rawInt = value << this->_fractional;
}

Fixed::Fixed(const float value)
{
	// std::cout <<  "Float constructor called" << std::endl;
	float tmp;
	int i;
	float invPower;
	_fractional = 8;
	int mask = 1 << (_fractional - 1);

	_rawInt = static_cast<int>(value) << _fractional;
	tmp = value - toInt();
	for (i = 2; mask; mask >>= 1, i <<= 1)
	{
		invPower = 1.0f / static_cast<float>(i);
		if (tmp > invPower)
		{
			tmp -= invPower;
			_rawInt |= mask;
		}
	}
	invPower = 1.0f / static_cast<float>(i);
	if (tmp >= invPower / 2)
		_rawInt++;
}

Fixed::Fixed (const Fixed &Fixed)
{
	// std::cout <<  "Copy constructor called" << std::endl;
	_fractional = 8;
	_rawInt = Fixed.getRawBits();
}

Fixed::~Fixed()
{
	// std::cout <<  "Default destructor called" << std::endl;
}


//___________________________
Fixed	&Fixed::operator=(const Fixed &target)
{
	// std::cout <<  "Default assignement called" << std::endl;
	_rawInt = target.getRawBits();
	return(*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	std::cout << fixed.toFloat();
	return (out);
}
//______________________________-
int		Fixed::getRawBits(void)const
{
	// std::cout <<  "getRawBits called" << std::endl;
	return(this->_rawInt);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout <<  "setRawBits called" << std::endl;
	_rawInt = 0;
}

float	Fixed::toFloat(void) const
{
	float	result;
	int		mask;
	int		i;
	result = toInt();
	mask = 1 << (_fractional - 1);
	i = 2;
	while (mask)
	{
		if (_rawInt & mask)
			result += 1.f / static_cast<float>(i);
		mask >>= 1;
		i <<= 1;
	}
	return (result);
}
int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_fractional);
}

Fixed& Fixed::min(Fixed &first, Fixed &second)
	{
		if (first.toFloat() < second.toFloat())
			return(first);
		else
			return (second);
	}
const Fixed& Fixed::min(const Fixed &first, const Fixed &second)
	{
		if (first.toFloat() < second.toFloat())
			return(first);
		else
			return (second);
	}
Fixed& Fixed::max(Fixed &first, Fixed &second)
	{
		if (first.toFloat() > second.toFloat())
			return(first);
		else
			return (second);
	}
const Fixed& Fixed::max(const Fixed &first, const Fixed &second)
	{
		if (first.toFloat() > second.toFloat())
			return(first);
		else
			return (second);
	}


<<

	const bool	Fixed::operator>(const Fixed &other)
	{
		int i;

		if (toFloat() > other.toFloat())
			i =1;
		i = 0;
		return (i);
	}

	const bool	Fixed::operator<(const Fixed &other)
	{
		int i;

		if (toFloat() < other.toFloat())
			i =1;
		i = 0;
		return (i);
	}

	const bool	Fixed::operator>=(const Fixed &other)
	{
		int i;

		if (toFloat() >= other.toFloat())
			i =1;
		i = 0;
		return (i);
	}

	const bool	Fixed::operator<=(const Fixed &other)
	{
		int i;

		if (toFloat() <= other.toFloat())
			i =1;
		i = 0;
		return (i);
	}

	const bool	Fixed::operator==(const Fixed &other)
	{
		int i;

		if (toFloat() == other.toFloat())
			i =1;
		i = 0;
		return (i);
	}

	const bool	Fixed::operator!=(const Fixed &other)
	{
		int i;

		if (toFloat() != other.toFloat())
			i =1;
		i = 0;
		return (i);
	}

	Fixed	&Fixed::operator+(const Fixed &Fixed)
	{
		_rawInt = _rawInt + Fixed._rawInt;
		return (*this);
	}

	Fixed	&Fixed::operator-(const Fixed &Fixed)
	{
		_rawInt = _rawInt - Fixed._rawInt;
		return (*this);
	}

	Fixed	Fixed::operator*(const Fixed &second)
	{
		return (Fixed(toFloat() * second.toFloat()));		
	}

	Fixed	Fixed::operator/(const Fixed &second)
	{
		return (Fixed(toFloat() * second.toFloat()));
	}


	Fixed	&Fixed::operator++()
	{
		_rawInt++;
		return(*this);
	}
	Fixed	Fixed::operator++(int)
	{
		Fixed res(*this);
		_rawInt++;
		return(res);
	}
	Fixed	&Fixed::operator--()
	{
		_rawInt--;
		return(*this);
	}
	Fixed	Fixed::operator--(int)
	{
		Fixed res(*this);
		_rawInt--;
		return(res);
	}