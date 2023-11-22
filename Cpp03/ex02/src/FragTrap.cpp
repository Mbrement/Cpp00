/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:03:23 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/22 02:08:48 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "defaultFragTrap";
	std::cout << "FragTrap by the name of  "<< _name <<" ready to serv ! (Default constructor called)" << std::endl;
	_attackDamages = 20;
	_energyPoints = 50;
	_hitPoints = 100;
	_type = "FragTrap";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap by the name of  "<< name <<" ready to serv ! (Named constructor called)" << std::endl;
	_attackDamages = 20;
	_energyPoints = 50;
	_hitPoints = 100;
	_type = "FragTrap";
	
}

FragTrap::FragTrap (const FragTrap &other) : ClapTrap(other)
{
	std::cout <<  "Copy constructor called of FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is dead ! (Default destructor called)" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &FragTrap)
{	
	_attackDamages = FragTrap._attackDamages;
	_energyPoints = FragTrap._energyPoints;
	_hitPoints = FragTrap._hitPoints;
	_type = FragTrap._type;
	return(*this);
}

void FragTrap::highFiveGuys()
{
	std::cout << _name << " Secret handshake !" << std::endl;
}
