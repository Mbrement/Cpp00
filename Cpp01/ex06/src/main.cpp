/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:32:24 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:32:28 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		Harl;
	std::string	argument;

	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	argument = argv[1];
	Harl.logLevel(argument);
	Harl.complain();
	return(0);
}
