#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << ": destroyed" << std::endl;
}

void Zombie::annonce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;;
}
void Zombie::giveName(const std::string &givenName)
{
	name = givenName;
}
