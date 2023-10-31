#include "../header/WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
	_name = "defaultWrongAnimal";
	type = "randomWrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal (const std::string name)
{
	_name = name;
	std::cout << "Named WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &WrongAnimal)
{
	std::cout <<  "Copy WrongAnimal constructor called" << std::endl;
	_name = WrongAnimal._name;
	type = WrongAnimal.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
	std::cout <<  "Default assignement called" << std::endl;
	_name = WrongAnimal._name;
	type = WrongAnimal.type;
	return(*this);
}


//___________________________________

void	WrongAnimal::setType(std::string newType)
{
	type = newType;
}

void	WrongAnimal::setName(std::string newName)
{
	_name = newName;
}

void WrongAnimal::makeSound()
{
	std::cout << "is making painfull noises" << std::endl;
}

const std::string WrongAnimal::getType() 
{
	return(type);
}

const std::string WrongAnimal::getName() 
{
	return(_name);
}
