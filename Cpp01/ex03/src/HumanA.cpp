#include "../header/HumanA.hpp"

HumanA::HumanA(const std::string& name, class Weapon &Weapon) : 
	Weapon(&Weapon),
	name(name)
{
	std::cout << name << " : created" << std::endl;
}
HumanA::~HumanA()
{
	std::cout << name << " : destroy" << std::endl;
}
void HumanA::attack()
{
	std::cout << name << " attack with their " << Weapon->getType() << std::endl;
}