/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:01:41 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/22 04:21:46 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap Original("Original");
	ClapTrap ClapTrap(Original);

	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.beRepaired(1);
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	ClapTrap.attack("Original");
	Original.takeDamage(5);
	Original.beRepaired(1);
	Original.takeDamage(10);
	Original.beRepaired(1);
}
