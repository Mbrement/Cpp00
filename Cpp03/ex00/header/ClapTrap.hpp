/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:01:09 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/14 04:01:13 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

public :
/*cannonical form*/
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap (const ClapTrap &ClapTrap);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &ClapTrap);
/*cannonical form*/
	void attack (const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private	:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamages;
};
#endif