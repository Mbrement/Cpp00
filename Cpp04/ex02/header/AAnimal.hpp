#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{

public :
/*cannonical form*/
	AAnimal();
	AAnimal(const std::string &name);
	AAnimal (const AAnimal &AAnimal);
	virtual ~AAnimal();
	virtual AAnimal	&operator=(const AAnimal &AAnimal);
/*cannonical form*/
	virtual void makeSound() const = 0;
	virtual void setName(const std::string &newName);
	virtual void setType(const std::string &newType);
	virtual const std::string getType() const;
	virtual const std::string getName() const;

protected:
	std::string type;

private	:
	std::string _name;
};
#endif