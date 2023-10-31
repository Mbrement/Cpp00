#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{

public :
/*cannonical form*/
	WrongAnimal();
	WrongAnimal(const std::string name);
	WrongAnimal (const WrongAnimal &WrongAnimal);
	virtual ~WrongAnimal();
	WrongAnimal	&operator=(const WrongAnimal &WrongAnimal);
/*cannonical form*/
	virtual void makeSound();
	void setName(std::string newName);
	void setType(std::string newType);
	const std::string getType();
	const std::string getName();

protected:
		std::string type;

private	:
	std::string _name;
};
#endif