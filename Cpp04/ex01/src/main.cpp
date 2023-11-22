#include "../header/Dog.hpp"
#include "../header/Cat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal *i = new Cat();
	const Animal* j = new Dog();
	const Cat *pet = new Cat("pet");

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "Idea : "<< pet->getBrain()->getIdea(5) << std::endl;
	delete meta;
	delete i;
	delete j;
	delete pet;

	return 0;
}
