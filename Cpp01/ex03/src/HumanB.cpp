#include "../header/HumanB.hpp"


HumanB::HumanB(const std::string& name) : 
	name(name)
{
	std::cout << name << " : created" << std::endl;
}
HumanB::~HumanB()
{
	std::cout << name << " : destroy" << std::endl;
}
void HumanB::attack()
{
	std::cout << name << " attack with their " << Weapon->getType() << std::endl;
}
void HumanB::setWeapon(class Weapon &givenWeapon)
{
	Weapon = &givenWeapon;
}