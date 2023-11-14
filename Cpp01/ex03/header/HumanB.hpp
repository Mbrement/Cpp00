/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:30:05 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:30:19 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{

	public :
	HumanB(const std::string& name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &givenWeapon);

	private :
	Weapon *Weapon;
	std::string name;
};

#endif