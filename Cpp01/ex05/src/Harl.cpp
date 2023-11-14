/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:31:56 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:31:58 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(const std::string &level)
{
	int i;
	Harl::ptr_func	funcs[4] = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	static const std :: string  names[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	i = 0;
	while (i < 4)
	{
		if (names[i] == level)
		{
			funcs[i]();
			break;
		}
		i++;
	}
	if (i >= 4)
	{
		std::cout << "Wrong imput message for Harl" << std::endl;
	}
}

void	Harl::debug (void)
{
	std::cout << "Classic debug message from Harl" << std::endl;
}
void	Harl::info (void)
{
	std::cout << "Classic info message from Harl" << std::endl;
}
void	Harl::warning (void)
{
	std::cout << "Classic warning message from Harl" << std::endl;
}
void	Harl::error (void)
{
	std::cout << "Classic error message from Harl" << std::endl;
}
