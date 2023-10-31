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
			this->Brain->replaceIdea(i, "Ball !");
		else
			this->Brain->replaceIdea(i, "World domination");
	}
}

Dog::Dog (const std::string name) : AAnimal(name)
{
	std::cout << "Named Dog constructor called" << std::endl;
	_name = name;
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

Dog::Dog (const Dog &Dog) : AAnimal(Dog)
{
	std::cout <<  "Copy Dog constructor called" << std::endl;
	int i;
	Brain = new class Brain;

	i = -1;
	while (++i < 100)
		Brain->replaceIdea(i, Dog.Brain->getIdea(i));
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
	type = Dog.type;
	int i;
	Brain = new class Brain;

	i = -1;
	while (++i < 100)
		Brain->replaceIdea(i, Dog.Brain->getIdea(i));
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