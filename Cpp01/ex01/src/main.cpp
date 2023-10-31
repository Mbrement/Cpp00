#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int	main(void)
{
	Zombie *horde;
	int i;
	int j;

	i = 3;
	j = -1;
	horde = zombieHorde(i, "Braindead");
	while(++j < i)
		horde[j].annonce();
	delete[] horde;
	return(0);
}
