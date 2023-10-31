#include "../header/Cat.hpp"

Cat::Cat () : Animal()
{
	_name = "defaultCat";
	type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat (const std::string name) : Animal(name)
{
	_name = name;
	type = "Cat";
	std::cout << "Named Cat constructor called" << std::endl;
}

Cat::Cat (const Cat &Cat) : Animal(Cat)
{
	std::cout <<  "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &Cat)
{
	std::cout <<  "Default Cat assignement called" << std::endl;
	_name = Cat._name;
	type = Cat.type;
	return(*this);
}


//___________________________________

void Cat::makeSound() const
{
	std::cout << _name << " Meow *purrrr*" << std::endl;
}
