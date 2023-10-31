#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{

public :
/*cannonical form*/
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &ScavTrap);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &ScavTrap);
/*cannonical form*/
	void guarGate();

private	:
};
#endif