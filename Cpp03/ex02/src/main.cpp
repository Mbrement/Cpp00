#include "../header/ScavTrap.hpp"
#include "../header/FragTrap.hpp"


int	main(void)
{
	FragTrap Original("Original");
	FragTrap Bob(Original);
	FragTrap Roger;
	FragTrap Edgar("Edgar");
	ScavTrap ScavTrap("Cookie");

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
	ScavTrap.attack("a traning dummy");
	Edgar.attack("a traning dummy");

	Original.takeDamage(5);
	Original.beRepaired(1);
	Original.takeDamage(10);
	Original.highFiveGuys();
}
