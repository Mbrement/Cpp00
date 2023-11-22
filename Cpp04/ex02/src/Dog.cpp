#include "../header/Dog.hpp"

Dog::Dog () : AAnimal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_name = "defaultDog";
	type = "Dog";
	Brain = new class Brain;
	int i;

	i = -1;
	while (++i < 100)
	{
		if (i % 2)
			this->Brain->replaceIdea(i, "Treat ?!");
		else
			this->Brain->replaceIdea(i, "Bones !");
	}
}

Dog::Dog (const std::string &name) : AAnimal(name)
{
	std::cout << "Named Dog constructor called" << std::endl;
	_name = name;
	type = "Dog";
	delete Brain;
	Brain = new class Brain;
	int i;

	i = -1;
	while (++i < 100)
	{
		if (i % 2)
			this->Brain->replaceIdea(i, "Treat ?!");
		else
			this->Brain->replaceIdea(i, "Bones !");
	}
}

Dog::Dog (const Dog &Dog) : AAnimal(Dog)
{
	std::cout <<  "Copy Dog constructor called" << std::endl;
	Brain = new class Brain;
	*Brain = *Dog.Brain;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete Brain;
}

Dog	&Dog::operator=(const Dog &Dog)
{
	std::cout <<  "Default Dog assignement called" << std::endl;
	_name = Dog._name;
	*Brain = *Dog.Brain;
	return(*this);
}


//___________________________________

void Dog::makeSound() const
{
	std::cout << _name << " bark bark ! bau bau !" << std::endl;
}

Brain *Dog::getBrain() const
{
	return(Brain);
}