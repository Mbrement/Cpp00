#include "../header/ClapTrap.hpp"


int	main(void)
{
	ClapTrap Original("Original");
	ClapTrap ClapTrap(Original);

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
	ClapTrap.attack("Original");
	Original.takeDamage(5);
	Original.beRepaired(1);
	Original.takeDamage(10);
	Original.beRepaired(1);
}
