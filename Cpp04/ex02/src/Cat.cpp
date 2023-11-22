#include "../header/Cat.hpp"

Cat::Cat () : AAnimal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_name = "defaultCat";
	type = "Cat";
	Brain = new class Brain;
	int i;

	i = -1;
	while (++i < 100)
	{
		if (i % 2)
			this->Brain->replaceIdea(i, "Mices");
		else
			this->Brain->replaceIdea(i, "World domination");
	}
}

Cat::Cat (const std::string &name) : AAnimal(name)
{
	std::cout << "Named Cat constructor called" << std::endl;
	_name = name;
	type = "Cat";
	int i;
	delete Brain;
	Brain = new class Brain;

	i = -1;
	while (++i < 100)
	{
		if (i % 2)
			this->Brain->replaceIdea(i, "Mices");
		else
			this->Brain->replaceIdea(i, "World domination");
	}
}

Cat::Cat (const Cat &Cat) : AAnimal(Cat)
{
	std::cout <<  "Copy Cat constructor called" << std::endl;
	Brain = new class Brain;
	*Brain = *Cat.Brain;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete Brain;
}

Cat	&Cat::operator=(const Cat &Cat)
{
	std::cout <<  "Default Cat assignement called" << std::endl;
	_name = Cat._name;
	type = Cat.type;
	*Brain = *Cat.Brain;
	return(*this);
}


//___________________________________

void Cat::makeSound() const
{
	std::cout << _name << " Meow *purrrr*" << std::endl;
}


Brain *Cat::getBrain() const
{
	return(Brain);
}