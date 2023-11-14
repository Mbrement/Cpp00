/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:30:45 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:30:47 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string& name) : 
	name(name)
{
	class Weapon Bone("jaw");
	setWeapon(Bone);
	std::cout << name << " : created" << std::endl;
}
HumanB::~HumanB()
{
	std::cout << name << " : destroy" << std::endl;
}
void HumanB::attack()
{
	std::cout << name << " attack with their " << Weapon->getType() << std::endl;
}
void HumanB::setWeapon(class Weapon &givenWeapon)
{
	Weapon = &givenWeapon;
}