/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:30:31 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:31:10 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, class Weapon &Weapon) : 
	Weapon(&Weapon),
	name(name)
{
	std::cout << name << " : created" << std::endl;
}
HumanA::~HumanA()
{
	std::cout << name << " : destroy" << std::endl;
}
void HumanA::attack()
{
	std::cout << name << " attack with their " << Weapon->getType() << std::endl;
}