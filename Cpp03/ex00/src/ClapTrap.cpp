/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:01:28 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/22 01:34:28 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
	_name = "defaultClapTrap";
	_attackDamages = 0;
	_energyPoints = 10;
	_hitPoints = 10;
	std::cout << "Allow me to introduce myself -- I am a CL4P-TP steward robot, but my friends call me "<< _name <<"! Or they would, if any of them were still alive (Default constructor called)" << std::endl;
}
ClapTrap::ClapTrap (const std::string &name)
{
	_name = name;
	_attackDamages = 0;
	_energyPoints = 10;
	_hitPoints = 10;
	std::cout << "Allow me to introduce myself -- I am a CL4P-TP steward robot, but my friends call me "<< name <<"! Or they would, if any of them were still alive (Named constructor called)" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &ClapTrap)
{
	std::cout <<  "Copy constructor called" << std::endl;
	_name = ClapTrap._name;
	_attackDamages = ClapTrap._attackDamages;
	_energyPoints = ClapTrap._energyPoints;
	_hitPoints = ClapTrap._hitPoints;
}

ClapTrap::~ClapTrap()
{
	std::cout << "If I sound pleased about this, it's only because my programmers made this my default tone of voice! I'm actually quite depressed! (Default destructor called)" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	std::cout <<  "Default assignement called" << std::endl;
	_name = ClapTrap._name;
	_attackDamages = ClapTrap._attackDamages;
	_energyPoints = ClapTrap._energyPoints;
	_hitPoints = ClapTrap._hitPoints;
	return(*this);
}

	void ClapTrap::attack (const std::string &target)
	{
		std::cout << _name << " try to attack"  << std::endl;
		if (_hitPoints > 0 && _energyPoints > 0)
		{
			std::cout << "ClapTrap " << _name << " hit " << target << " for " << _attackDamages << " ! Not so tough after all !"  << std::endl;
			_energyPoints--;
		}
	}
	void ClapTrap::takeDamage(unsigned int amount)
	{
		std::cout << _name << " is attacked for " << amount << " !" << std::endl;
		if (_hitPoints > 0)
			_hitPoints -= amount;
		if (_hitPoints <= 0)
			std::cout << _name << " is down !" << std::endl;
	}
	void ClapTrap::beRepaired(unsigned int amount)
	{
		std::cout << _name << " try to repear hitself, ";
		if (_hitPoints >= 0 && _energyPoints > 0)
		{
			_hitPoints += amount;
			_energyPoints--;
			std::cout << "Sweet life juice ! + " << amount << " !"<< std::endl;
		}
		else
			std::cout << "but nothing happen !" << std::endl;
	}
