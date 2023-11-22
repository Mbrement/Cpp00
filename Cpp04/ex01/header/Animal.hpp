#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

public :
/*cannonical form*/
	Animal();
	Animal(const std::string &name);
	Animal (const Animal &Animal);
	virtual ~Animal();
	Animal	&operator=(const Animal &Animal);
/*cannonical form*/
	virtual void makeSound() const;
	void setName(const std::string &newName);
	void setType(const std::string &newType);
	const std::string getType() const;
	const std::string getName() const;

protected:
	std::string type;

private	:
	std::string _name;
};
#endif