#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

public :
	Zombie();
	~Zombie();
	void annonce(void);
	Zombie* zombieHorde( int N, std::string name);
	void giveName(const std::string &name);
private	:
	std::string name;
};
#endif