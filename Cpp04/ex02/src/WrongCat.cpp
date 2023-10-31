#include "../header/WrongCat.hpp"

WrongCat::WrongCat () : WrongAnimal()
{
	_name = "defaultWrongCat";
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat (const std::string name) : WrongAnimal(name)
{
	_name = name;
	type = "WrongCat";
	std::cout << "Named WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat (const WrongCat &WrongCat) : WrongAnimal(WrongCat)
{
	std::cout <<  "Copy WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat)
{
	std::cout <<  "Default WrongCat assignement called" << std::endl;
	_name = WrongCat._name;
	type = WrongCat.type;
	return(*this);
}


//___________________________________

void WrongCat::makeSound()
{
	std::cout << _name << " try to meow but can't" << std::endl;
}
