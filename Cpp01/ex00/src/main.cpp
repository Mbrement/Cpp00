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
