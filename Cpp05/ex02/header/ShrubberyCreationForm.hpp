#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public Form
{

public :
/*cannonical form*/
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
/*cannonical form*/
	void executeCurrent() const;
	void execute(Bureaucrat const &executor) const;

private:
	std::string _target;

};

#endif