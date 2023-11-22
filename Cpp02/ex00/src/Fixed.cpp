/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:14:20 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/14 03:14:21 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
	
Fixed::Fixed() : rawInt(0)
{
	std::cout <<  "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed &Fixed)
{
	std::cout <<  "Copy constructor called" << std::endl;
	setRawBits(Fixed.getRawBits());
}

Fixed::~Fixed()
{
	std::cout <<  "Default destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &Fixed)
{
	std::cout <<  "Default assignement called" << std::endl;
	setRawBits(Fixed.getRawBits());
	return(*this);
}

int		Fixed::getRawBits(void)const
{
	std::cout <<  "getRawBits called" << std::endl;
	return(this->rawInt);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout <<  "setRawBits called" << std::endl;
	this->rawInt = raw;
}
