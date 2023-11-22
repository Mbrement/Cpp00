#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal, 
			private Brain
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
	Brain *getBrain() const;

private	:
	std::string _name;
	Brain *Brain;
};

#endif