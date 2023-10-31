#include "Zombie.hpp"

Zombie* newZombie (std::string name)
{
	Zombie *rtn = new Zombie(name);
	return (rtn);
}