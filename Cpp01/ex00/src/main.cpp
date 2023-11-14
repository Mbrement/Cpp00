/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:28:28 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:28:29 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie (std::string name);
void randomChump( std::string name);

int	main(void)
{
	Zombie *cake;

	cake = newZombie("Cookie eater");
	if (!cake)
		return(std::cout << "Zombie not created", 1);
	cake->annonce();
	randomChump("Candy eater");
	delete cake;
	return(0);
}
