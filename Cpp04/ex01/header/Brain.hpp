#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

public :
/*cannonical form*/
	Brain();
	Brain (const Brain &Brain);
	virtual ~Brain();
	Brain	&operator=(const Brain &Brain);
/*cannonical form*/
	std::string getIdea(int i);
	void replaceIdea(int i, const std::string newIdea);

	private :
	std::string _idea[100];
};


#endif