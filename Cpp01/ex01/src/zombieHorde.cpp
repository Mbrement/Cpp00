#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	int i;
	Zombie *horde;
	
	i = -1;
	horde = new Zombie[N];
	while(++i < N)
		horde[i].giveName(name);
	return(horde);
}