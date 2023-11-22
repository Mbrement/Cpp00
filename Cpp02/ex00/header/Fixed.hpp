/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:14:17 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/14 03:14:18 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

public :
	Fixed();
	Fixed (const Fixed &Fixed);
	~Fixed();
	Fixed	&operator=(const Fixed &Fixed); 
	int		getRawBits(void)const;
	void	setRawBits(int const raw);

private	:
	static const int 	fractional = 8;
	int					rawInt;
};
#endif