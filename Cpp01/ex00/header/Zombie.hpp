#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

public :
	Zombie(const std::string &name);
	~Zombie();
	void annonce(void);

private	:
	std::string name;
};
#endif