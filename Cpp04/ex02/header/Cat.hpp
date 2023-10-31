#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

public :
/*cannonical form*/
	Cat();
	Cat(const std::string name);
	Cat (const Cat &Cat);
	~Cat();
	virtual Cat	&operator=(const Cat &Cat);
/*cannonical form*/
	void makeSound() const;
	Brain *getBrain() const;

private	:
	std::string _name;
	Brain *Brain;
};
#endif