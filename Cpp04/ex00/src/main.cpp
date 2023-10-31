#include "../header/Dog.hpp"
#include "../header/Cat.hpp"
#include "../header/WrongCat.hpp"


int	main(void)
{

	const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;
return 0;
}
