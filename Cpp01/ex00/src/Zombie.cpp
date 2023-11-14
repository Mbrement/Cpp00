/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:28:39 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:28:40 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : name(name)
{
std::cout << name << ": created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": destroyed" << std::endl;
}


void Zombie::annonce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;;
}