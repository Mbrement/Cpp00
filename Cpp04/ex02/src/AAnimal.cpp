#include "../header/AAnimal.hpp"

AAnimal::AAnimal ()
{
	_name = "defaultAAnimal";
	type = "randomAAnimal";
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal (const std::string &name)
{
	_name = name;
	std::cout << "Named AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal (const AAnimal &AAnimal)
{
	std::cout <<  "Copy AAnimal constructor called" << std::endl;
	_name = AAnimal._name;
	type = AAnimal.type;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &AAnimal)
{
	std::cout <<  "Default assignement called" << std::endl;
	_name = AAnimal._name;
	type = AAnimal.type;
	return(*this);
}


//___________________________________

void	AAnimal::setType(const std::string &newType)
{
	type = newType;
}

void	AAnimal::setName(const std::string &newName)
{
	_name = newName;
}

void AAnimal::makeSound() const
{
	std::cout << "*silence*" << std::endl;
}

const std::string AAnimal::getType() const
{
	return(type);
}

const std::string AAnimal::getName() const
{
	return(_name);
}
