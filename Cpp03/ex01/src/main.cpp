#include "ScavTrap.hpp"


int	main(void)
{
	ScavTrap Original("Original");
	ScavTrap Bob(Original);
	ScavTrap Roger;
	ScavTrap Edgar("Edgar");
	// ClapTrap ClapTrap(Original);

	Roger = Edgar;
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");
	Original.attack("a traning dummy");

	Bob.attack("a traning dummy");
	Edgar.attack("a traning dummy");

	Original.takeDamage(5);
	Original.beRepaired(1);
	Original.takeDamage(10);
	Original.guardGate();
}
