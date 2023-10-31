#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : name(name)
{
std::cout << name << ": created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": destroyed" << std::endl;
}


void Zombie::annonce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;;
}