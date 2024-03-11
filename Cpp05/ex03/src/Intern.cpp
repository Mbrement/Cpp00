#include "../header/Intern.hpp"


Intern::Intern()
{

}

Intern::Intern(Intern &other)
{
	(void) other;
}

Intern &Intern::operator=(Intern &other)
{
	(void) other;
	return(*this);
}

Intern::~Intern()
{

}

Form *Intern::makeForm(const std::string form, const std::string target)
{
	const std::string forms[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm",
	};
	int i;
	i = 0;
	while (forms[i] != form && i < 3)
		i++;
	if (i == 3)
		throw InterExeption();
	else
		switch (i)
		{
			case 0:
				return new PresidentialPardonForm(target); break;
			case 1:
				return new RobotomyRequestForm(target); break;
			case 2:
				return new ShrubberyCreationForm(target); break;
		};
		return (NULL);
}	
