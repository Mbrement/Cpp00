/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:30:55 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:30:58 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &givenType)
{
	setType(givenType);
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string &givenType)
{
	type = givenType;
}
std::string Weapon::getType()
{
	return(type);
}