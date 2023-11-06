#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern
{

public :
/*cannonical form*/
	Intern();
	Intern(const std::string target);
    Intern(Intern &other);
    Intern &operator=(Intern &other);
	~Intern();
/*cannonical form*/
	Form* makeForm(const std::string form, const std::string target);
class InterExeption : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Form Format Unknow";
		}
	};

private:
		
};

#endif