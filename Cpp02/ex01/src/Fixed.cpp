/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:15:11 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/14 03:15:11 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout <<  "Default constructor called" << std::endl;
	rawInt = 0;
}

Fixed::Fixed(const int value)
{
	std::cout <<  "Int constructor called" << std::endl;
	rawInt = value << this->fractional;
}

Fixed::Fixed(const float value)
{
	std::cout <<  "Float constructor called" << std::endl;
	float tmp;
	int i;
	float invPower;
	int mask = 1 << (fractional - 1);

	rawInt = static_cast<int>(value) << fractional;
	tmp = value - toInt();
	for (i = 2; mask; mask >>= 1, i <<= 1)
	{
		invPower = 1.0f / static_cast<float>(i);
		if (tmp > invPower)
		{
			tmp -= invPower;
			rawInt |= mask;
		}
	}
	invPower = 1.0f / static_cast<float>(i);
	if (tmp >= invPower / 2)
		rawInt++;
}

Fixed::Fixed (const Fixed &Fixed)
{
	std::cout <<  "Copy constructor called" << std::endl;
	rawInt = Fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout <<  "Default destructor called" << std::endl;
}


//___________________________
Fixed	&Fixed::operator=(const Fixed &target)
{
	std::cout <<  "Default assignement called" << std::endl;
	rawInt = target.getRawBits();
	return(*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
//______________________________-
int		Fixed::getRawBits(void)const
{
	std::cout <<  "getRawBits called" << std::endl;
	return(this->rawInt);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout <<  "setRawBits called" << std::endl;
	rawInt = raw;
}

float	Fixed::toFloat(void) const
{
	float	result;
	int		mask;
	int		i;
	result = toInt();
	mask = 1 << (fractional - 1);
	i = 2;
	while (mask)
	{
		if (rawInt & mask)
			result += 1.f / static_cast<float>(i);
		mask >>= 1;
		i <<= 1;
	}
	return (result);
}
int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->fractional);
}