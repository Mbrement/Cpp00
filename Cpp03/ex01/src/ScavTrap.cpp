#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "defaultScavTrap";
	std::cout << "ScavTrap by the name of  "<< _name <<" ready to serv ! (Default constructor called)" << std::endl;
	_attackDamages = 20;
	_energyPoints = 50;
	_hitPoints = 100;
	_type = "ScavTrap";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap by the name of  "<< name <<" ready to serv ! (Named constructor called)" << std::endl;
	_attackDamages = 20;
	_energyPoints = 50;
	_hitPoints = 100;
	_type = "ScavTrap";
	
}

ScavTrap::ScavTrap (const ScavTrap &other) : ClapTrap(other)
{
	std::cout <<  "Copy constructor called of Scavtrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is dead ! (Default destructor called)" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ScavTrap)
{	
	_attackDamages = ScavTrap._attackDamages;
	_energyPoints = ScavTrap._energyPoints;
	_hitPoints = ScavTrap._hitPoints;
	_type = ScavTrap._type;
	return(*this);
}

void ScavTrap::guardGate()
{
	std::cout << _name << " is now a gate keeper ! No pineapple on pizza !" << std::endl;
}