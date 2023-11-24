/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:02:15 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/24 17:56:02 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{

public :
/*cannonical form*/
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &ScavTrap);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &ScavTrap);	
/*cannonical form*/
	void guardGate();
	void attack (const std::string &target);

private	:
};
#endif