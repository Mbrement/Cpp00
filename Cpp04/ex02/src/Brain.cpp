#include "../header/Brain.hpp"

Brain::Brain ()
{
	std::cout << "Default Brain constructor called" << std::endl;
	int i;
	i = -1;
	while (++i < 100)
		_idea[i] = "empty";
}

Brain::Brain (const Brain &Brain)
{
	std::cout <<  "Copy Brain constructor called" << std::endl;
	int i;
	i = -1;
	while (++i < 100)
		_idea[i] = Brain._idea[i];
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &Brain)
{
	std::cout <<  "Default assignement called" << std::endl;
	int i;
	i = -1;
	while (++i < 100)
		_idea[i] = Brain._idea[i];
	return(*this);
}

std::string Brain::getIdea(int i)
{
	if (i < 100 && i >= 0)
		return(_idea[i]);
	return ("");
}

void Brain::replaceIdea(int i, const std::string &newIdea)
{
	if (i < 100 && i >= 0)
		_idea[i] = newIdea;
}

