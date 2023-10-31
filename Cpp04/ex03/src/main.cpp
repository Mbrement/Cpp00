#include "../header/Dog.hpp"
#include "../header/Cat.hpp"

int	main(void)
{

	const AAnimal* meta = new AAnimal();
const AAnimal *i = new Cat();
const AAnimal* j = new Dog();
const Cat *pet = new Cat("pet");
AAnimal Pouet;
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
