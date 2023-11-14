/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:29:31 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:29:32 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << ": destroyed" << std::endl;
}

void Zombie::annonce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;;
}
void Zombie::giveName(const std::string &givenName)
{
	name = givenName;
}
