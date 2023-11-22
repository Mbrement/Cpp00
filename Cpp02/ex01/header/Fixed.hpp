/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:14:39 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/14 03:14:39 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
	static const int 	fractional = 8;
	int		rawInt;
};
	std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
#endif