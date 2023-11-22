#include "../header/Dog.hpp"

Dog::Dog () : Animal()
{
	_name = "defaultDog";
	type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog (const std::string &name) : Animal(name)/*,Brain();*/
{
	_name = name;
	type = "Dog";
	std::cout << "Named Dog constructor called" << std::endl;
}

Dog::Dog (const Dog &Dog) : Animal(Dog)
{
	std::cout <<  "Copy Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &Dog)
{
	std::cout <<  "Default Dog assignement called" << std::endl;
	_name = Dog._name;
	type = Dog.type;
	return(*this);
}


//___________________________________

void Dog::makeSound() const
{
	std::cout << _name << " bark bark ! bau bau !" << std::endl;
}
