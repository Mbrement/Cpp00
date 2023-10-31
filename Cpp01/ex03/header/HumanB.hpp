#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{

	public :
	HumanB(const std::string& name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &givenWeapon);

	private :
	Weapon *Weapon;
	std::string name;
};

#endif