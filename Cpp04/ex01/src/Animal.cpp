#include "../header/Animal.hpp"

Animal::Animal ()
{
	_name = "defaultAnimal";
	type = "randomAnimal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal (const std::string &name)
{
	_name = name;
	std::cout << "Named Animal constructor called" << std::endl;
}

Animal::Animal (const Animal &Animal)
{
	std::cout <<  "Copy Animal constructor called" << std::endl;
	_name = Animal._name;
	type = Animal.type;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &Animal)
{
	std::cout <<  "Default assignement called" << std::endl;
	_name = Animal._name;
	type = Animal.type;
	return(*this);
}


//___________________________________

void	Animal::setType(const std::string &newType)
{
	type = newType;
}

void	Animal::setName(const std::string &newName)
{
	_name = newName;
}

void Animal::makeSound() const
{
	std::cout << "*silence*" << std::endl;
}

const std::string Animal::getType() const
{
	return(type);
}

const std::string Animal::getName() const
{
	return(_name);
}
