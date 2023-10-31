#include "../header/Weapon.hpp"

Weapon::Weapon(const std::string &givenType)
{
	setType(givenType);
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string &givenType)
{
	type = givenType;
}
std::string Weapon::getType()
{
	return(type);
}