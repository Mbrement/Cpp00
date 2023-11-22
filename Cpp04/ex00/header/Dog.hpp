#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{

public :
/*cannonical form*/
	Dog();
	Dog(const std::string &name);
	Dog (const Dog &Dog);
	~Dog();
	Dog	&operator=(const Dog &Dog);
/*cannonical form*/
	void makeSound() const;

private	:
	std::string _name;
};
#endif