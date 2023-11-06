#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

	public :
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();
	void attack();

	private :
	Weapon *Weapon;
	std::string name;
};

#endif